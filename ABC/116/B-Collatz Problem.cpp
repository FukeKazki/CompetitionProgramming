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
 */
int main()
{
    int n;
    cin >> n;
    vector<int> a(1000000, 0);
    a.at(0) = n;
    FOR(i, 1000000, 1) {
        if(a.at(i-1) % 2 == 0) {
            a.at(i) = a.at(i - 1) / 2;
        } else {
            a.at(i) = a.at(i - 1) * 3 + 1;
        }
    }
    REP(i, 1000000) {
        if(a.at(i) == 0) {
            break;
        }
        FOR(j, 1000000, i+1) {
            if(a.at(j) == 0) {
                break;
            }
            if (a.at(i) == a.at(j))
            {
                cout << j+1 << endl;
                return 0;
            }
        }
    }
    return 0;
}