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
 * 比較するときは型まで注意
 * 区間の計算は累積和
*/

/* ===== コーナーケースに気をつけろ ===== */

int main()
{
    string S;
    cin >> S;
    string s1 = "", s2 = "";
    int N = S.length();
    bool flag1 = true, flag2 = true, flag3 = true;

    for (int i = 0; i < (N - 1) / 2; i++)
    {
        s1 += S.at(i);
    }

    for (int i = ((N + 3) / 2) - 1; i < N; i++)
    {
        s2 += S.at(i);
    }

    int a = N;
    for (int i = 0; i < (N / 2) + 1; i++)
    {
        if (S.at(i) != S.at(a - 1))
        {
            flag1 = false;
        }
        a--;
    }

    int b = s1.length();
    for (int i = 0; i < (b / 2) + 1; i++)
    {
        if (s1.at(i) != s1.at(b - 1))
        {
            flag2 = false;
        }
        b--;
    }

    int c = s2.length();
    for (int i = 0; i < (c / 2) + 1; i++)
    {
        if (s2.at(i) != s2.at(c - 1))
        {
            flag3 = false;
        }
        c--;
    }

    // cout << s1 << " " << s2 << " " << S << endl;
    if (flag1 && flag2 && flag3)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}