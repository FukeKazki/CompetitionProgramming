#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    // char alp[26] = {'a', 'b', 'c', "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    string alp = "abcdefghijklmnopqrstuvwxyz";
    int alpI[26] = {0};
    for(int i = 0; i < S.length(); i++) {
        for(int j = 0; j < 26; j++) {
            // cout <<"S: " << S.at(i) << "alp:" << alp[j] << endl;
            if(S.at(i) == alp[j]) {
                alpI[j] += 1;
            }
        }
    }
    
    string out = "";
    for(int i = 0; i < 26; i++) {
        if(alpI[i] == 0) {
            out += alp[i];
            break;
        }
    }
    if(out == "") {
        cout << "None" << endl;
    }else {
        cout << out << endl;
    }

}