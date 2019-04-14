#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int a[200000], b[200000];
    char op[200000];
    int i = 0;
    while(true) {
        cin >> a[i] >> op[i] >> b[i];
        if(op[i] == '?') break;
        i++;
    }

    for(int j = 0; j < i; j++) {
        switch(op[j]) {
            case '+':
                cout << a[j] + b[j] << endl;
            break;
            case '-':
                cout << a[j] - b[j] << endl;
            break;
            case '*':
                cout << a[j] * b[j] << endl;
            break;
            case '/':
                cout << a[j] / b[j] << endl;
            break;
        }
    }

    return 0;
}