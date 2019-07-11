#include <iostream>

using namespace std;

int main() {
    int K;
    cin >> K;
    // Kまでの偶数の個数 * Kまでの奇数の個数
    cout << (K/2)*((K+1)/2) << endl;
    return 0;
}