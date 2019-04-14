#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int a,b,c,d,e,k;
    cin >> a >> b >> c >> d >> e >> k;
    bool flag = false;
    if(b-a<=k && c-a<=k && d-a<=k && e-a<=k && c-b<=k && d-b<=k && e-b <=k && d-c<=k && e-c<=k && e-d<=k){
        flag = true;
    }
    if(flag) cout<< "Yay!" << endl;
    else cout << ":(" << endl;

    return 0;
}

//成約の a < b < c < d < e より
// e - a <= k だけの条件でよい