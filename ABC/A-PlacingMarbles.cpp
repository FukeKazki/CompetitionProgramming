#include <iostream>
#include <string>

using namespace std;

int main() {
    string m;
    int i, c = 0;

    cin >> m;
    for(i = 0; i < m.length(); i++) {
        if(m[i] == '1') {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}