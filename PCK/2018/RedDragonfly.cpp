#include <iostream>

using namespace std;

int main() {
    int x1, x2;
    cin >> x1 >> x2;
    int distance = x1 - x2 > 0 ? x1-x2 : x2 - x1;
    cout << distance << endl;
    return 0;
}