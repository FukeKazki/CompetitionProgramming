#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define INF 1e9
#define ALL(v) v.begin(), v.end()
template<class T> inline bool chmax(T& a, T b) { if(a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) { a = b; return 1; } return 0; }

typedef long long ll;
/**
 * C問以降は ll を使う.
 * double型にするのを忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
 */
int main()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    vector<ll> h(n, 0);
    REP(i, n) {
        cin >> h.at(i);
    }
    REP(i, n - 1)
    {
        ll tmp = 0;
        FOR(j, n-1, i) {
            if (h.at(j) >= h.at(j + 1))
            {
                tmp++;
                cnt = max(cnt, tmp);
            }
            else
            {
                i = i + tmp;
                break;
            }
        }
        if(cnt > n - i) {
            break;
        }
    }
    cout << cnt << endl;

    return 0;
}