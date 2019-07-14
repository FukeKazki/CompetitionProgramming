#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    bool flag = false;
    /**
     * ケーキとドーナツを(i, j)個ずつ買う場合を全探索する
     * Nと一致すればok 
     */
    for(int i = 0; i <= N/4; i++) {
        for(int j = 0; j <= N/7; j++) {
            if(N == i*4 + j*7) {
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}