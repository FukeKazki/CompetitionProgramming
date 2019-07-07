#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    cout << min(A*N, B) << endl;

    return 0;
}