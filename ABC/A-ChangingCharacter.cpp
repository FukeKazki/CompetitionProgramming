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
    string s;
    K -=1;
    cin >> s;
    if(s[K] == 'A') {
        s[K] = 'a';
    } else if(s[K] == 'a') {
        s[K] = 'A';
    } else if(s[K] == 'B') {
        s[K] = 'b';
    } else if(s[K] == 'b') {
        s[K] = 'B';
    } else if(s[K] == 'c') {
        s[K] = 'C';
    } else if(s[K] == 'C') {
        s[K] = 'c';
    }
    cout << s << endl;
    return 0;
}
/*
アスキーコード使って +32でできる
*/