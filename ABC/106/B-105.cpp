#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 1) {
            int w = 0;
            for(int j = 1; j <= N; j++) {
                if(i % j == 0) ++w;
            }
            if(w == 8) cnt++;
        }
    }
    cout << cnt << endl;
}