#include <iostream>

using namespace std;

int main() {
    int n, q;
    char k;
    cin >> n;
    int S[14] = {0}, H[14] = {0}, C[14] = {0}, D[14] = {0};

    for(int i = 0; i < n; i++) {
        cin >> k >> q;
        switch (k)
        {
        case 'S':
            S[q] = 1;
            break;
        case 'H':
            H[q] = 1;
            break;
        case 'C':
            C[q] = 1;
            break;
        case 'D':
            D[q] = 1;
            break;
        }
    }

    for(int j = 1; j < 14; j++) {
        if(S[j] == 0) {
            cout << 'S' << ' ' << j << endl;
        }
    }
    for(int j = 1; j < 14; j++) {
        if(H[j] == 0) {
            cout << 'H' << ' ' << j << endl;
        }
    }
    for(int j = 1; j < 14; j++) {
        if(C[j] == 0) {
            cout << 'C' << ' ' << j << endl;
        }
    }
    for(int j = 1; j < 14; j++) {
        if(D[j] == 0) {
            cout << 'D' << ' ' << j << endl;
        }
    }

    return 0;
}