#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string S;
    cin >> S;

    //すべての文字列を左右反転する
    reverse(S.begin(), S.end());
    for(int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());

    //端から切っていく
    bool can = true;
    for(int i = 0; i < S.size();) {
        bool can2 = false;  //4個の文字列のどれかでdivideできるか
        for(int j = 0; j < 4; ++j) {
            string d = divide[j];
            if(S.substr(i, d.size()) == d) { //dでdivideできたら
                can2 = true;
                i += d.size(); //iを増加する
            }
        }
        if(!can2) { //できなかったら
            can = false;
            break;
        }
    }

    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}