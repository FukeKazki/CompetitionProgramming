#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    int A, B;
    cin >> A >> B;
    bool flag = false;
    for(int i = 0; ; i++) {
        if(abs(A-i) == abs(B-i)) {
            cout << i << endl;
            return 0;
        }
        if(i == max(A, B)) {
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
    }

    return 0;
}