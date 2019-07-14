#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    if(N%K) cout << 1 << endl;
    else cout << 0 << endl;
}