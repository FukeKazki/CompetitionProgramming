#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    double sum = 0;
    double a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        a[i] = 1/a[i];
        sum += a[i];
    }
    printf("%.8lf", 1/sum);


    return 0;
}
/**
 * double型を割る時 1.0/a にしないと