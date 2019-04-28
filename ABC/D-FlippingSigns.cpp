#include <iostream>
#include <vector>

using namespace std;

const int INF = 1001001001;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    long long ans = 0;
    int neg = 0;
    for(int i = 0; i < n; i++) {
        ans += abs(a[i]);
        if (a[i] < 0) neg++;
    }
    if (neg % 2 == 1) {
        int minA = INF;
        for(int i = 0; i < n; i++) {
            minA = min(minA, abs(a[i]));
        }
        ans -= minA * 2;
    }
    cout << ans << endl;
    return 0;
}