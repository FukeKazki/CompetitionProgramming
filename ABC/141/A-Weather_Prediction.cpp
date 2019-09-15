#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define INF 1e9
#define ALL(v) v.begin(), v.end()
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
typedef long long ll;
/**
 * C問以降は ll を使う.
 * double型にするのを忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
 */
int main()
{
    string S;
    // string weather[3] = { "Sunny", "Cloudy", "Rainy" };
    vector<string> weather{"Sunny", "Cloudy", "Rainy"};
    cin >> S;
    REP (i, weather.size()) {
        if(S == weather.at(i)) {
            if(i == weather.size()-1) {
                cout << weather.at(0) << endl;
            }else {
                cout << weather.at(i+1) << endl;
            }
        }
    }
    return 0;
}