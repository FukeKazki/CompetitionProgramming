#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int N, counter;
    int d[110];
    cin >> N;
    for(int i = 0; i < N; ++i) cin >> d[i];

    int num[110] = {0};
    for(int i = 0; i < N; ++i) {
        num[d[i]]++; //num配列のd[i]番目が++1される 同値の時は同じ場所が++されるので種類だけを確認できる
    }
    int res = 0;
    for(int i = 1; i <= 100; ++i) {
        if(num[i]) { //0より大きかったら
            ++res;
        }
    }

    cout << res << endl;

    return 0;
}