#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    double sum = 0;
    for(int i = 1; i <= N; i++) {
        int now = i;
        double result = 1.0/N;
        while(now < K) {
            now *= 2;
            result /= 2;
        }
        sum += result;
    }
    printf("%.14lf\n", sum);
    return 0;
}