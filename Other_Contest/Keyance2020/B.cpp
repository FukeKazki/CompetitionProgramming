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
    ll min_index = INF;
    ll max_index = INF*-1;
    vector<pair<ll, ll>> pairs(N);
    REP(i, N)
    {
        ll X, L;
        cin >> X >> L;
        min_index = min(min_index, X - L);
        max_index = max(max_index, X + L);
        pairs.at(i) = make_pair(X, L);
    }
    ll M;
    if(min_index > 0) {
        M = max_index + min_index;
    } else {
        M = max_index - min_index;
    }
    vector<ll> x(M, 0);
    REP(i, N) {
        ll first = pairs.at(i).first;
        ll second = pairs.at(i).second;
            for (int j = first-second-min_index; j <= first+second; j++) {
                x.at(j) += 1;
            }
    }

    sort(ALL(x));
    cout << N - (x.at(M - 1) - 1) << endl;

    return 0;
}