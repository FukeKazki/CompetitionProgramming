#include <iostream>

using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;
    int cnt = 0;
    int i = min(A, B);
    int num;
    while(cnt < K) {
        if(A % i == 0 && B % i == 0) {
            cnt++;
            num = i;
        }
        i--;
    }
    cout << num << endl;
    
    return 0;
}