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
    int A, B;
    cin >> A >> B;
    int c = A+B;
    int d = A-B;
    int e = A*B;
    cout << max({c, d, e}) << endl;

    return 0;
}