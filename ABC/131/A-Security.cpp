#include <iostream>

using namespace std;

int main() {
    char code[4];
    bool flag = false;
    for(int i = 0; i < 4; i++) {
        cin >> code[i];
        if(code[i] == code[i-1]) {
            flag = true;
        }
    }
    flag ? cout << "Bad" << endl : cout << "Good" << endl;

    return 0;
}