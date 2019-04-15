#include <iostream>

using namespace std;

int main() {
    int H[1000], W[1000];
    int n = 0;
    while(true) {
        cin >> H[n] >> W[n];
        if(H[n] == 0 && W[n] == 0) break;
        ++n;
    }

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < H[i]; j++)
        {
            for (int l = 0; l < W[i]; l++) {
                if(j % 2 == 0 && l % 2 == 0) cout << '#';
                if(j % 2 == 0 && l % 2 != 0) cout << '.';

                if(j % 2 != 0 && l % 2 == 0) cout << '.';
                if(j % 2 != 0 && l % 2 != 0) cout << '#';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}