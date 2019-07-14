#include <iostream>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
ll lcm(ll a, ll b) { return a/gcd(a, b)*b; }

ll f(ll x, int c, int d) {
    ll res = x;
    res -= x / c;
    res -= x / d;
    res += x / lcm(c, d);
    return res;
}


int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    ll ans = f(B, C, D) - f(A-1, C, D);
    cout << ans << endl;
}
/**
 * a 以上 b 以下は
 * b 以下 - (a-1)以下
 * x 以下で a で割り切れる個数は
 * x / a で求まる
 * 
 * 最小公倍数 LCM(a, b) = a * b / gcd(a, b)
 * 割り切れるものを全体から引く
 * ベン図を書くとわかりやすい
 */