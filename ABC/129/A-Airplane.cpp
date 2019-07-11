#include <iostream>

using namespace std;

int main() {
    int P, Q, R;
    cin >> P >> Q >> R;
    // int total;
    // total += min(P, Q);
    // if(total == P) {
    //     total += min(Q, R);
    // } else {
    //     total += min(P, R);
    // }
    // cout << total << endl;
    cout << P + Q + R - max({P, Q, R}) << endl;
    return 0;
}
/*
全部足して最大値引くのが頭の良いやり方だよな
cout << P + Q + R - max({P, Q, R}) << endl;
 */