#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int length = 0;
    int cnt = 0;
    for(int i = 0; i < S.length(); i++) {
        if(S[i] == 'A' || S[i] == 'T' || S[i] == 'G' || S[i] == 'C') {
            ++cnt;
            length = max(length, cnt);
        } else {
            cnt = 0;
        }
    }
    cout << length << endl;
}