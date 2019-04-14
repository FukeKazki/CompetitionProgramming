#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <iomanip>

using namespace std;

int main() {
    int H[10000], W[10000];
    int n = 0;

    while(true) {
        cin >> H[n] >> W[n];
        if(H[n] == 0 && W[n] == 0) break;
        ++n;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < H[i]; j++) {
            for(int l = 0; l < W[i]; l++) {
                cout << '#';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}