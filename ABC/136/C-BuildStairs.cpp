#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    int H[N];
    for(int i = 0; i < N; i++) cin >> H[i];
    for(int i = N-1; i > 1; --i) {
        if(H[i-1]- H[i] == 1) {
            H[i-1]-=1;
        }else if(H[i-1]-H[i] > 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}