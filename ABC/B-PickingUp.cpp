#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;
    int x[N], y[N];
    for(int i = 0; i < N; i++) cin >> x[i] >> y[i];
    
    int minCost = N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i == j) continue;
            int p = x[j] - x[i];
            int q = y[j] - y[i];
            int cost = N;
            for(int k = 0; k < N; k++) {
                for(int l = 0; l < N; l++) {
                    if(x[k] - p == x[l] && y[k] - q == y[l]) --cost;
                }
            }
            if (cost < minCost) minCost = cost;
        }
    }

    cout << minCost << endl;
    

    return 0;
}

/**
 * 1 <= N <= 50 だから O(N^4)でも大丈夫
 * for i と for j で全ての p, q について考える.
 * for k と for l で直前の座標が a-p, b-q かどうか判断しそのときはコストを1引く.
 * 最小のコストを保存し出力する.
*/