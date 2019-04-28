#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

//最大公約数
int gcd(int x, int y) {
    if (y == 0) return x;
    return gcd(y, x%y);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> l(n), r(n);
    //累積和
    //前からi番目までの累積和
    for(int i = 0; i < n-1; i++) l[i+1] = gcd(l[i], a[i]); 
    //後ろからi番目までの累積和
    for(int i = n-1; i >= 1; --i) r[i-1] = gcd(r[i], a[i]);
    int ans = 1;
    //消したi番目の一個前と一個後のgcdを計算
    //最初を0にすることで 例) iが2のときは2を求めればよくなる
    for(int i = 0; i < n; i++) ans = max(ans, gcd(l[i], r[i]));
    cout << ans << endl;
    return 0;
}