#include <iostream>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    int cnt = 0;
    while(N > 0) {
        N -= 2*D + 1;
        cnt++;
    }
    cout << cnt << endl;
}