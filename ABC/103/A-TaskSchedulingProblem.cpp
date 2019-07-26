#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int A[3];
    cin >> A[0] >> A[1] >> A[2];
    int cost = 0;
    sort(A, A+3);
    cost += abs(A[0] - A[1]);
    cost += abs(A[1] - A[2]);
    /**
     * 上の処理って要するに
     * A[0] - A[1] + A[1] - A[2]
     * = A[0] - A[2]
     * だから 最大値 - 最小値 で求まる
     * max({A[0], A[1], A[2]}) - min({A[0], A[1], A[2]}) 
     */
    cout << cost << endl;
}