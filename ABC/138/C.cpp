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
    double v[n];
    REP(i, n) {
        cin >> v[i];
    }
    sort(v, v+n);
    double sum = 0;
    // int i = 0;
    // while(i+1 == n-1) {
    //     cout << v[i] << " " << v[i+1] << " " << (v[i]+v[i+1])/2 << endl;
    //     v[i+1] = (v[i]+v[i+1])/2;
    //     i++;
    // }
    for(int i = 0; i < n; i++) {
        v[i+1] = (v[i]+v[i+1])/2;
        if(i+1 == n-1) break;
    }
    /** こっちのが良い
     * double ans = v[i]
     * for(int i = 1; i < n; i++) {
     *  ans += (ans + v[i])/2
     * }
    */
    // cout << v[i] << endl;
    printf("%.8lf", v[n-1]);

    return 0;
}