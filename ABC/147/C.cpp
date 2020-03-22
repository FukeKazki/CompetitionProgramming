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
    vector<vector<pair<int, int> > > data(N, vector<pair<int, int> >(N));
    REP(i, N)
    {
        int A;
        cin >> A;
        REP(j, A) {
            int x, y;
            cin >> x >> y;
            data.at(i).at(j) = make_pair(x, y);
        }
    }

    int cnt = 0;

    // cout << "--------" << endl;
    REP(i, N)
    {
        REP(j, N) {
            if(data.at(i).at(j).second == 1) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}