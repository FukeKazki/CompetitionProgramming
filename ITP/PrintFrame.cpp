#include <iostream>

using namespace std;

int main() {
    int H[10000], W[10000];
    int n = 0;

    while(true) {
        cin >> H[n] >> W[n];
        if(H[n] == 0 && W[n] == 0) break;
        n++;
    }

    for(int i  = 0; i < n; i++) {
        for(int j = 0; j < H[i]; j++) {
            for(int l = 0; l < W[i]; l++) {
                if(j == 0 || j == H[i] - 1 || l == 0 || l == W[i] - 1) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    

    return 0;
}