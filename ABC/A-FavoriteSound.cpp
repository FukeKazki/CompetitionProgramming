#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int cnt = 0;
    while(B > 0) {
        if(A > B) break;
        B -= A;
        ++cnt;
    }
    if(cnt > C) cout << C << endl;
    else cout << cnt << endl;

    return 0;
}