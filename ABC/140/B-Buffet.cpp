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
    vector<int> A(N, 0);
    vector<int> B(N, 0);
    vector<int> C(N - 1, 0);
    REP(i, N) {
        cin >> A.at(i);
    }
    REP(i, N) {
        cin >> B.at(i);
    }
    REP(i, N-1) {
        cin >> C.at(i);
    }
    int total = 0;
    int prev = 0;
    REP(i, N)
    {
        total += B.at(A.at(i)-1);
        if(prev == A.at(i)-1 && i != 0) {
            total += C.at(prev-1);
        } 
        prev = A.at(i);
    }
    cout << total << endl;
    return 0;
}