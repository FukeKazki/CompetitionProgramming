#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int t[6];
    for(int i = 0; i < 5; i++) cin >> t[i];
    int ans = 0, mx = 0;
    for(int i = 0; i < 5; i++) ans += (t[i]+9)/10*10;
    for(int i = 0; i < 5; i++) mx = max(mx, (t[i]+9)/10*10 - t[i]);
    ans -= mx;
    cout << ans << endl;

    return 0;
}