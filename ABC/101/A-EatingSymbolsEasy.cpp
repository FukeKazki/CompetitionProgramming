#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    int cnt = 0;
    for(int i = 0; i < S.length(); i++) {
        if(S[i] == '+') cnt++;
        else cnt--;
    }
    cout << cnt << endl;
}