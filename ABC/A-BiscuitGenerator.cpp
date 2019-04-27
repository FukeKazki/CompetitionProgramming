#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int A, B, T;
    cin >> A >> B >> T;
    int cnt = 0;
    int k = 1;
    for(int i = 1; i <= T+0.5; i++) {
        if(i == k*A) {
            cnt += B;
            k++;
        }
    }
    cout << cnt << endl;
    return 0;
}