#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int L[N];
    for(int i = 0; i < N; i++) cin >> L[i];

    //ボールの位置
    int bound = 0;
    //バウンド回数
    int count = 1;

    
    int M[N];
    for(int i = 0; i < N; i++) {
        if(i == 0) M[i] = L[i];
        else {
            M[i] = M[i-1]+L[i];
        }
    }
    // for(int i = 0; i < N; i++) cout << M[i] << endl;

    for(int i = 0; i < N; i++) {
        if(M[i] <= X) count++;
    }

    cout << count << endl;
    return 0;
}