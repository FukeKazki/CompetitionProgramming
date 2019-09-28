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
int main()
{
    double N;
    cin >> N;
    double cnt = 0;
    for (int i = 1; i <= N; i++) {
        if(i % 2 == 1) {
            cnt++;
        }
    }
        // cout << cnt << endl;
        // cout << cnt / N << endl;
        printf("%.9lf", cnt / N);
    return 0;
}