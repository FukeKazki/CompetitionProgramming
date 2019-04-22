#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int a = 0, b = 0;
    while(true) {
        bool flag = true;
        for(int i = 0; i < N-1; i++) {
            if(S[i] == '#' && S[i+1] == '.'){
                flag = false;
                a++;
                
                S[i] ='.';
                break;
            }
            else if(S[i] == '.' && S[i+1] == '#') {
                flag = false;
                b++;
                
                S[i] ='#';
                break;
            }
            
        }
        if(flag) break;
    }
    if (a > b) cout << b << endl;
    else cout << a << endl;
    return 0;
}