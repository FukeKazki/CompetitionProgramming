#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int W[N];
    for(int i = 0; i < N; i++) cin >> W[i];

    int mininmum = 99999;
    for(int i = 1; i < N; i++) {
        int a = 0;
        for(int j = 0; j <= i; j++) {
            a += W[j];
        }
        int b = 0;
        for(int j = i+1; j < N; j++) {
            b += W[j];
        }
        mininmum = min(mininmum, abs(a-b));
    }
    /**
     * bの計算は全体の合計からaを引いたもので計算できるのでO(N)でも解ける
     */
    cout << mininmum << endl;
}