#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

template<class T> inline bool chmax(T& a, T b) { if(a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

long long a[100010][3];

long long dp[100010][3];

int main() {
    int N; cin >> N;
    for(int i = 0; i < N; ++i) for(int j = 0; j < 3; ++j) cin >> a[i][j];

    /**
     * chmin(dp[to], dp[from] + (矢印の重み))
     */

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < 3; ++j) {
            for(int k = 0; k < 3; ++k) {
                if(j == k) continue;
                chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    long long res = 0;
    for(int j = 0; j < 3; ++j) chmax(res, dp[N][j]);
    cout << res << endl;
    
}