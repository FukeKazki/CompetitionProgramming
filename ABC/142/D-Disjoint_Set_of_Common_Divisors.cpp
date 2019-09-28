#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define INF 1e9
#define ALL(v) v.begin(), v.end()

typedef long long ll;
/**
 * C問以降は ll を使う.
 * double型にするのを忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
 */
ll gcd(ll a, ll b) {
    return b ? gcd(b, a%b) : a;
}
// 素因数分解
vector<pair<ll, int>> factorize(ll n) {
    vector<pair<ll, int>> res;
    for (ll i = 2; i * i <= n; ++i) {
        if(n % i )
            continue;
        res.emplace_back(i, 0);
        while(n % i == 0) {
            n /= i;
            res.back().second++;
        }
    }
    // 見なくていいよ!!!!
    if(n != 1)
        res.emplace_back(n, 1);
    return res;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a, b);
    // なんで素因数の数+1で求まるのかわからん
    auto f = factorize(g);
    // 1はすべての公約数
    int ans = f.size() + 1;
    cout << ans << endl;
    return 0;
}