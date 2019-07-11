#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int A, P;
    cin >> A >> P;
    int k = 0;
    int cnt = 0;
    k = A*3;
    k += P;
    while(k/2 > 0) {
        cnt++;
        k-=2;
    }

    cout << cnt << endl;

    return 0;
}