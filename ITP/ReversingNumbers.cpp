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
    cin >> n;
    int a[n];
    for(int i = n - 1; i >= 0; i--) cin >> a[i];
    for(int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << a[i] << endl;
        } else {
            cout << a[i] << ' ' ;
        }
    }

    return 0;
}