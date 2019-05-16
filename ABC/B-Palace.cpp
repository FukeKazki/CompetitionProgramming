#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    int N, T, A;
    cin >> N;
    cin >> T >> A;
    int H[N];
    for(int i = 0; i < N; i++) cin >> H[i];
    int cnt = 0;
    double sa = 99999;
    for(int i = 0; i < N; i++) {
        if(sa > abs(A - (T-(H[i]*0.006)))) {
            sa = abs(A - (T-(H[i]*0.006)));
            cnt = i+1;
        }
    }
    cout << cnt << endl;
    return 0;
}