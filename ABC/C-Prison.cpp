#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int L[M], R[M];
    for(int i = 0; i < M; i++) cin >> L[i] >> R[i];
    //処理
    int maxL = 1;
    int minR = N;
    for(int i = 0; i < M; i++)  {
        maxL = max(maxL, L[i]);
        minR = min(minR, R[i]);
    }
    int ans = minR - maxL + 1; //区間の長さなので
    ans = max(ans, 0); //負だったら0にする
    cout << ans << endl;
    return 0;
}

/*
1 ~ 3を 1以上3以下と考える
以上だけ考えると、一番うしろから始まる以上の範囲を満たせばよい
以下だけ考えると、一番前から始まる以下の範囲を満たせば良い
よってmax(Li) ~ min(Ri)を満たすカードが通るカード
*/