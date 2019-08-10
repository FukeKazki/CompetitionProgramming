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
    int K, X;
    cin >> K >> X;
    int a = X+K-1;
    int b = X-K+1;
    for(int i = b; i <= a; i++) {
        cout << i;
        if(i != a) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}