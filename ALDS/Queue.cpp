#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

#define LEN 100005

// 構造体を利用してノードを作成
// ppは仮の名前 typedefでPと呼ぶ
typedef struct pp {
    char name[100];
    int t;
} P;
// 型がPの配列Q
P Q[LEN];
int head, tail, n;

void enqueue(P x) {
    // tailのさしている場所にxを入れる
    Q[tail] = x;
    // tailが移動
    tail = (tail + 1) % LEN;
}

P dequeue() {
    P x = Q[head];
    //　headが移動する
    head = (head + 1) % LEN;
    return x;
}

// 小さいほうを返すだけ
int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int elaps = 0, c;
    int i, q;
    P u;
    char str[64];
    // プロセス数とクオンタムを入力
    cin >> n >> q;
    // キューの配列に名前と処理に必要な時間を入れる
    for(i = 1; i <= n; i++) {
        cin >> Q[i].name >> Q[i].t;
    }
    head = 1;
    tail = n + 1;
    // ラウンドロビンスケジュールの処理
    while(head != tail) {
        // キューから処理するものを取得する
        u = dequeue();
        // 処理時間とクオンタムの小さいほうの時間処理する
        c = min(q, u.t);
        // 処理する（時間を引く
        u.t -= c;
        // 処理の合計時間を加算していく
        elaps += c;
        // 処理が終わらなかったらキューに戻す
        if(u.t > 0) enqueue(u);
        // 終わったら出力する
        else {
            cout << u.name << ' ' << elaps << endl;
        }
    }
    return 0;
}