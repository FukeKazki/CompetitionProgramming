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
    int N;
    cin >> N;
    vector<int> D(N);
    REP(i, N) {
        cin >> D.at(i);
    }
    int M;
    cin >> M;
    vector<int> T(M);
    REP(i, M) {
        cin >> T.at(i);
    }
    int cnt = 0;
    sort(D.begin(), D.end());
    sort(T.begin(), T.end());
    int j = 0;
    REP(i, N) {
        if(D.at(i) == T.at(j)) {
            if(j != M-1) {
                j++;
            } else {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}