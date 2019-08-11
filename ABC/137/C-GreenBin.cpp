#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    rep(i, n) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        mp[s]++;
    }
    ll ans = 0;
    for(auto& p : mp) {
        int s = p.second;
        ans += (ll)s*(s-1)/2;
    }
    cout << ans << endl;
    return 0;
}