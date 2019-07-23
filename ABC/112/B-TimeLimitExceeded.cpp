#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    int minCost = 9999;
    for(int i = 0; i < N; i++) {
        int c, t;
        cin >> c >> t;
        if(T >= t) {
           minCost = min(minCost, c);
	    }
    }
    if(minCost == 9999) {
        cout << "TLE" << endl;
    } else {
        cout << minCost << endl;
    }
}
