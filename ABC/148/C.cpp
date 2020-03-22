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
*/
ll gcd(ll a, ll b) {
    return b ? gcd(b, a%b) : a;
} 

// 最小公倍数
ll lcm(ll a, ll b) {
    return a/gcd(a, b)*b;
}
int main()
{
    ll A, B;
    cin >> A >> B;
    cout << lcm(A, B) << endl;
    return 0;
}