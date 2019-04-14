#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    int a[20000];
    long long sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);
    for(int i = 0; i < n; i++) sum += a[i];
    cout << a[0] << ' ' << a[n-1] << ' ' << sum << endl;


    return 0;
}