#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int value = 99999999;
    for(int i = 0; i < S.length()-2; i++) {
        int tmp =  abs(753-((int(S[i])-48)*100 + (int(S[i+1]) - 48)*10 + int(S[i+2])-48));
        value = min(value, tmp);
    }
    cout << value << endl;
    return 0;
}