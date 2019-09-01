#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;
    char day[7][4] = {"thu", "fri", "sat", "sun", "mon", "tue", "wed"};
    cout << day[x%7] << endl;
}