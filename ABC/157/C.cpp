#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define INF 1e9
#define ALL(v) v.begin(), v.end()

typedef long long ll;

/**
 * 不安なら ll を使う.
 * 小数は double を忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
 * pair<型, 型> 変数名
 * map<型, 型> 変数名  // 連想配列
 * priority_queue<型> 変数名  // 最大値から出てくるヒープ
*/

/* ===== コーナーケースに気をつけろ ===== */

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> s(M);
    vector<char> c(M);
    REP(i, M)
    {
        cin >> s.at(i) >> c.at(i);
    }

    for (int i = 0; i <= 999; i++)
    {
        int digit = 0;
        // 0の桁は1
        if (i == 0)
        {
            digit = 1;
        }
        else
        { // 桁の計算
            int tmp = i;
            while (tmp)
            {
                tmp /= 10;
                ++digit;
            }
        }
        // 桁が違えばさよなら
        if (N != digit)
        {
            continue;
        }
        // 数値を文字列に
        string str = to_string(i);

        bool flag = true;
        REP(j, M)
        {
            // cout << i << endl;
            // cout << "s[j]: " << s[j] << endl;
            // cout << "str[s[j]-1]: " << str[s[j] - 1] << endl;
            // cout << "c[j]: " << c[j] << endl;
            if (str[s[j] - 1] != c[j])
            {
                flag = false;
                break;
            }
        }
        // cout << flag << endl;
        // cout << endl;
        if (flag)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}