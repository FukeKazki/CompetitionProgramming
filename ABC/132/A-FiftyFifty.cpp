#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char s[4];
    cin >> s;
    sort(s, s+4);
    s[0] == s[1] && s[1] != s[2] && s[2] == s[3] ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}