#include <iostream>
#include <string>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int cnt = 0;
    for(int i = A; i <= B; i++) {
        int C = i;
        int a = C % 10;
        C /= 10;
        int b = C % 10;
        C /= 100;
        int c = C % 10;
        C /= 10;
        int d = C % 10;
        // cout << a <<" "<<b<<" "<<c<<" "<<d<<endl;
        if(a == d && b == c) cnt++;
    }
    cout << cnt << endl;
}