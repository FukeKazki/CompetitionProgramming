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
    int V[N], C[N];
    for(int i = 0; i < N; i++) {
        cin >> V[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> C[i];
    }
    // int X[N], Y[N];
    int cost = 0;
    for(int i = 0; i < N; i++) {
        int tmpX = V[i] - C[i];
        if(tmpX > 0) {
            cost += tmpX;
        }
    }
    cout << cost << endl;
    return 0;
}