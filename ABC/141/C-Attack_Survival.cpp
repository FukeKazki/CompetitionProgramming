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
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> participant(N, K);
    REP(i, Q) {
        int A;
        cin >> A;
        participant.at(A-1) += 1;
    }
    REP(i, N) {
        participant.at(i) -= Q;
    }
    REP(i, N) {
        if(participant.at(i) <= 0) {
            cout << "No" << endl;
        }else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}