#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    int N;
    cin >> N;
    int p[N];
    for(int i = 0; i < N; i++) cin >> p[i];
    int q[N];
    for(int i = 0; i < N; i++) {
        q[i] = p[i];
    }
    sort(p, p+N);
    int cnt = 0;
    for(int i = 0; i < N; i++) {
        if(q[i] != p[i]) {
            cnt++;
        }
    }
    if(cnt <= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}