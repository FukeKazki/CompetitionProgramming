#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int a;
    string s;
    cin >> a;
    cin >> s;
    if(a >= 3200) {
        cout << s << endl;
    }else {
        cout << "red" << endl;
    }

    return 0;
}