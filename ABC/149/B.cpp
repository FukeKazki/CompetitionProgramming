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
int main()
{
    ll A, B, K;
    cin >> A >> B >> K;
    if(A < K) {
        K -= A;
        A = 0;
        if (B < K) {
            B = 0;
        } else {
            B -= K;
        }
    } else {
        A -= K;
    }
    cout << A << " " << B << endl;
    return 0;
}