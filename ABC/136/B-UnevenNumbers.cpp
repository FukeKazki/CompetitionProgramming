#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for(int i = 1; i <= N; i++) {
        if((to_string(i).length()) % 2 == 1) sum++;
        // int j = i;
        // int cnt = 0;
        // while(j) {
        //     j = j / 10;
        //     cnt++;
        // }
        // if(cnt % 2 == 1) {
        //     sum++;
        // }
    }
    cout << sum << endl;
}

// 桁の長さは文字列にして長さ測るほうが良い