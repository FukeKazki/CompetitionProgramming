#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>

using namespace std;

int main() {
    int n;
    int R[200000];
    long long range = -1e18;
    int minValue;

    cin >> n;

    for(int i = 0; i < n; i++) cin >> R[i];

    minValue = R[0];

    // for(int i = 0; i < n-1; i++) {
    //     if(minValue > R[i]) {
    //         minValue = R[i];
    //     }

    //     if(range < R[i+1] - minValue) {
    //         range = R[i+1] - minValue;
    //     }
    
    // }

    for(int i = 1; i < n; i++) {

        if(range < R[i] - minValue) {
            range = R[i] - minValue;
        }

        if(minValue > R[i]) {
            minValue = R[i];
        }
    
    }

    

    cout << range << endl;

    return 0;
}