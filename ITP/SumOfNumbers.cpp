#include <iostream>
#include <string>
// #include <cstdio>

using namespace std;

int main() {
    string s;
    
    while(1) {
        cin >> s;
        if(s == "0") break;
        int sum = 0;
        // cout << "文字列の長さ :" << s.length() << endl;
        for(int i = 0; i < s.length(); i++) {
            sum += s[i] - '0';
        }
        cout << sum << endl;
    }

    return 0;
}