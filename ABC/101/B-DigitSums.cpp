#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int s = N;
    int sum = 0;
    // 各桁の和の計算
    while(N) {
        int dig = N % 10;
        sum += dig;
        N /= 10;
    }
    // cout << sum << endl;
    if(s % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}