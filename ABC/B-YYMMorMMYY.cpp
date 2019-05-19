#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {
    string S;
    cin >> S;
    string s1 = S.substr(0, 2);
    string s2 = S.substr(2, 2);
    bool flag1 = false;
    bool flag2 = false;
    if(s1 > "00" && s1 <= "12") flag1 = true;
    if(s2 > "00" && s2 <= "12") flag2 = true;
    if(flag1 && flag2) cout << "AMBIGUOUS" << endl;
    else if(!flag1 && flag2) cout << "YYMM" << endl;
    else if(!flag1 && !flag2) cout << "NA" << endl;
    else cout << "MMYY" << endl;
    return 0;
}