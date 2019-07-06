#include <iostream>

using namespace std;

int main() {
    int N, C;
    cin >> N >> C;
    N += 1;
    int sum_cake = 0;
    for(int i = 0; i < C; i++) {
        int p;
        cin >> p;
        sum_cake += p;
    }
    if(sum_cake % N == 0) {
        cout << sum_cake / N << endl;
    } else {
        cout << (sum_cake / N) + 1 << endl;
    }

    return 0;
}