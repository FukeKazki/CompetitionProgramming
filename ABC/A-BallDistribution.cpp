#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int max = N % K;
    cout << max << endl;
    return 0;
}