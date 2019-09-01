#include <iostream>

using namespace std;

int main() {
    int h[1010] = {0};
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int s, f;
        cin >> s >> f;
        for(int j = s; j < f; j++) {
            h[j]++;
        }
    }
    for(int i = a; i < b; i++) {
        if(h[i] > 0) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    // for(int i = 0; i < 1010; i++) {
    //     cout << h[i] << " ";
    //     if(i % 20 == 0) cout << endl;
    // }
}