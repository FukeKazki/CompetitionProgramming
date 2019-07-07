#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    int X[N][D];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < D; j++) {
            cin >> X[i][j];
        }
    }
    // 処理
    int cnt = 0;

    for(int i = 0; i < N-1; i++) {
        for(int j = i+1; j < N; j++) {
            double sum = 0;
            for(int k = 0; k < D; k++) {
                sum += (X[i][k]-X[j][k])*(X[i][k]-X[j][k]);
            }
            sum = sqrt(sum);
            // cout << "i: " << i << "j: " << j << "sum: " << sum << endl;
            if(ceil(sum) == floor(sum)) ++cnt;
        }
    }

    // for(int i = 0; i < N-1; i++) {
    //     double sum1 = 0;
    //     for(int j = 0; j < D; j++) {
    //         sum1 += (X[i][j] - X[i+1][j])*(X[i][j] - X[i+1][j]);
    //     }
    //     sum1 = sqrt(sum1);
    //     cout << "sum1  " << sum1 << endl;
    //     if(ceil(sum1) == floor(sum1)) ++cnt;
    // }
    cout << cnt << endl;
    return 0;
}