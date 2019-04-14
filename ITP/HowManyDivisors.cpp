#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    int counter;
    cin >> a >> b >> c;
    for(int i = a; i <= b; ++i) {
        if(c % i == 0) {
            ++counter;
        }
    }

    cout << counter << endl;

    return 0;
}