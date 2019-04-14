#include <iostream>
#include <string>

using namespace std;

//各桁の和を計算する
int findSumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int total = 0;

    for(int i = 1; i <= N; ++i) {
        int sum = findSumOfDigits(i);
        if(sum >= A && sum <= B) { //iの各桁の和がA以上B以下の場合
            total += i;
        }
    }
    cout << total << endl;

    return 0;
}