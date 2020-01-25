#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define MM(i, n, m) for (int i = m; i <= n; i++)
#define INF 1e9
#define ALL(v) v.begin(), v.end()

typedef long long ll;

/**
 * C問以降は ll を使う.
 * double型にするのを忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
 * pair<型, 型> 変数名
 * map<型, 型> 変数名  // 連想配列
 * priority_queue<型> 変数名  // 最大値から出てくるヒープ
*/
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> p(M);
    vector<vector<int> > s(M);
    REP(i, M)
    {
        int k;
        cin >> k;
        s.at(i).resize(k);
        REP(j, k)
        {
            cin >> s.at(i).at(j);
        }
    }
    REP(i, M) {
        cin >> p.at(i);
    }

    int cnt = 0;
    for (int bit = 0; bit < (1 << N); ++bit)
    {
        bool flag = true;
        REP(i, M) {
            int sum = 0;
            for(int j = 0; j < s.at(i).size(); j++){
                if(bit & (1<<s.at(i).at(j)-1)) {
                    sum++;
                }
            }
            if(sum%2 != p.at(i)) {
                flag = false;
            }
        }

        if(flag) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}