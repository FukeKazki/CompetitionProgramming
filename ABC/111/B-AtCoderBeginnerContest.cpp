#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    while(1) {
        if(N%10 == (N/10)%10 && N%10 == (N/100)%10) break;
        N++;
    }
    cout << N << endl;
}