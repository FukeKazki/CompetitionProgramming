#include <iostream>

using namespace std;

typedef long long ll;

// 階乗の計算
int factorial(ll n) {
    if(n == 0) return 1;
    else return n * factorial(n-1);
}

// フィボナッチ数列の計算
int fibonacci(ll n) {
    switch(n) {
        case 0: return 0;
        case 1: return 1;
        default: return fibonacci(n-2) + fibonacci(n-1);
    }
}

// 最大公約数
ll gcd(ll a, ll b) {
    return b ? gcd(b, a%b) : a;
} 

// 最小公倍数
ll lcm(ll a, ll b) {
    return a/gcd(a, b)*b;
}

int main() {
    int n;
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}

/**
 * 再帰関数勉強用のファイル
 */