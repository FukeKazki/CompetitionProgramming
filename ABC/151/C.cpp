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
    int N, M;
    cin >> N >> M;
    map<int, string> mp;
    int ac = 0, wa = 0;
    vector<int> was(N, 0);
    REP(i, M) {
        int a;
        string b;
        cin >> a >> b;
        if(a > N) {
            continue;
        }
        if(b == "AC" && mp[a] == "AC") {
            // continue;
        } else if(b == "WA" && mp[a] == "AC") {
            // continue;
        } else if(b == "WA") {
            mp[a] = b;
            was.at(a-1)++;
        } else if(b == "AC") {
            mp[a] = b;
            ac++;
            wa += was.at(a-1)++;
        }
    }
    
    cout << ac << " " << wa << endl;
    return 0;
}