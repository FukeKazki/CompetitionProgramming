#include <iostream>

using namespace std;

typedef long long ll;

ll f(ll i) {
    int sum = 0;
    while(i) {
        sum += i % 10;
        i /= 10;
    }
    return sum;
}

int main() {
    int a, n, m;
    cin >> a >> n >> m;
    int cnt = 0;
    for(int y = 1; y <= 72; y++) {
        int t = n;
        ll x = 1;
        while(t) {
            x*=(y+a);
            t--;
        }
        if(x <= m && f(x) == y) cnt++; 
    }
    cout << cnt << endl;
}