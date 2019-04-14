#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    string S;
    cin >> S;

    //初期値は大きい値
    int ans = S.size();

    //iは最初に使う色(0 or 1)
    for(int i = 0; i < 2; i++) {
        //iを最初に使ったときに変えなければならないタイルの数
        int cnt = 0;

        for (int j = 0; j < S.size(); j++)
        {
            //(char)(0 + '0') -> '0'
            //(char)(1 + '0') -> '1'
            //偶数番目のとき
            /*
                i = 0 のとき 010101... 
                S[0]が1のときはcnt++する
                i = 1のとき 1010..
                S[0]が0のときcnt++する
                            
            */
            if(j % 2 == 0 && S[j] != (char)(i + '0')) cnt++;
            //奇数番目のとき
            /*
                i = 0のとき 0101..
                S[1]が0のときはcnt++する
                i = 1のとき 1010..
                S[1]が1のときcnt++する
            */
            if(j % 2 == 1 && S[j] == (char)(i + '0')) cnt++;

            // XOR を使うと簡潔になる (排他的論理和: どちらかが成立するときにtrueになる)
            // if ((j % 2 == 0) ^ (S[j] == (char)(i + '0'))) cnt++;
        }
        // i = 0 のときは確定でcntをansに代入する(ansが大きいため)
        // i = 1 のときは ans と cnt を比較して小さい方を代入する
        ans = min(ans, cnt);
        
    }

    cout << ans << endl;

    return 0;
}
/*
並ぶ順番は 010101.. か 10101.. の二通りなので
それぞれを計算して小さい方を出力すれば良い
*/