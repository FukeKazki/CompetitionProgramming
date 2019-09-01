#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double A, B, X;
    cin >> A >> B >> X;
    int total = 0;
    if(X <= 1000 && X>500) {
        total += A;
    }
    else if(A < B*2) {
        while(X-1000>=0) {
            X-=1000;
            total += A;
        }
        X = ceil(X/500);
        total += X*B;
    } else {
        X = ceil(X/500);
        total += X*B;
    }
    cout << total << endl;
}