#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>

using namespace std;

int main() {
    int x[3001], y[3001];
    int i = 0;
    while(true) {
        cin >> x[i] >> y[i];
        if(x[i] == 0 && y[i] == 0) break;
        i++;
    }

    for(int j = 0; j < i; j++) {
        if(x[j] > y[j]) {
            int tmp = x[j];
            x[j] = y[j];
            y[j] = tmp;
        }
        
        cout << x[j] << " " << y[j] << endl;
    }

    return 0;
}