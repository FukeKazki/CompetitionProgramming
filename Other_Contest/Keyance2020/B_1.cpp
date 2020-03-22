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
    int N;
    cin >> N;
    vector<ll> x(N*2);
    REP(i, N*2)
    {
        ll X, L;
        cin >> X >> L;
        auto iter = lower_bound(ALL(x), X - L);
        if (lower_bound(ALL(x), X - L))
        {
        }
        x.at(i) = X - L;
        x.at(++i) = X + L;
    }
    REP(i, N*2) {
        cout << x.at(i) << " " << x.at(++i) << endl;
    }
    return 0;
}