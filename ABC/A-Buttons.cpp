#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int A, B;
    int sum = 0;
    cin >> A >> B;
    for(int i = 0; i < 2; i++) {
        if(A > B) {
            sum += A;
            A -= 1;
        }else {
            sum += B;
            B -=1;
        }
    }
    cout << sum << endl;
    

    return 0;
}