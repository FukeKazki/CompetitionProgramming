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
    vector<int> B(N - 1);
    REP(i, N - 1){
        cin >> B.at(i);
    }
    int sum = 0, prev_value = 0;
    REP(i, N-1) {
        // cout << sum << " : " << prev_value << endl;
        if (!i)
        {
            sum += 2 * B.at(i);
            prev_value = B.at(i);
        } else {
            if (B.at(i) < max(B.at(i),prev_value)) {
                sum -= prev_value;
                sum += 2 * B.at(i);
                prev_value = B.at(i);
            }
            else
            {
                sum += B.at(i);
                prev_value = B.at(i);
            }
        }
    }
    cout << sum << endl;
    return 0;
}