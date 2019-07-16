#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    int minR = 999;
    int sum = 0;
    for(int i = 0; i < N; i++) {
        minR = min(minR, abs(L+i));
        sum += L+i;
    }
    if(sum > 0) {
        cout << sum - minR << endl;
    } else {
        cout << sum + minR << endl;
    }
}