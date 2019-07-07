#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

int main() {
    ll l, r;
    cin >> l >> r;
    int ans = 2018;
    for(ll i = l; i < r; i++) {
        for(ll j = i+1; j <= r; j++) {
            ans = min(ans, (int)(i*j % 2019));
            if(!ans) {
                cout << 0 << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;

    return 0;
}