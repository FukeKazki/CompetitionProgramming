#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    // string c;
    char c[1300];
    // cin >> c;
    fgets(c, 1300, stdin);
    for(int i = 0; i < sizeof c; i++) {
        if(c[i] >= 'A' && c[i] <= 'Z') {
            c[i] += 32;
        }
        else if(c[i] >= 'a' && c[i] <= 'z') {
            c[i] -= 32;
        }
    }
    cout << c;

    return 0;
}