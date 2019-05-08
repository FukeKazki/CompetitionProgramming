#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    if(S<="2019/04/30") {
        cout << "Heisei" << endl;
    } else {
        cout << "TBD" << endl;
    }
    return 0;
}