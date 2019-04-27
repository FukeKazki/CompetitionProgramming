#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

//最大公約数
int gcd(int a, int b) {
    if(a < b) {
        swap(a, b);
    }
    int r = a % b;
    while(r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main() {
    int N;
    cin >> N;
    int A[N];
    int tG = 0;
    for(int i = 0; i < N; i++) cin >> A[i];

    sort(A, A+N, greater<int>());
    // A[N] = A[0];

    // for(int i = 0; i < N-1; i++) {
    //     for(int j = i+1; j < N; j++) {
    //         int tmp = gcd(A[i], A[j]);
    //         tG = max(tG, tmp);
    //     }
    // }
    if(A[N-1] % 2 != 0) A[N-1] += 1;
    tG = gcd(A[0], A[N-1]);
    cout << tG << endl;
    
    return 0;
}