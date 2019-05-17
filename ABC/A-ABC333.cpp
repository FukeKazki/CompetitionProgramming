#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    A*B % 2 == 0 ? cout << "No" << endl : cout << "Yes" << endl;
    return 0;
}