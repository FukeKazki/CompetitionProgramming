#include <iostream>
#include <string>
#include <cstdio>
#include <string.h>
#include <stdlib.h>

using namespace std;

//stackの0番目は空にする
int top = 0, S[10000];

void push(int x) {
    // 先にtopを+1してxを代入する
    S[++top] = x; 
}

int pop() {
    // 現在のtopの位置の値を返す
    // その後topを-1する
    int result = S[top];
    top--;
    return result;
    // return S[--top+1]; 
}

int main() {
    int a, b;
    char s[1000];
    // 入力がある間処理を行う EOFで終了
    while(cin >> s) {
        if(s[0] == '+') {
            a = pop();
            b = pop();
            push(a + b);
        } else if(s[0] == '-') {
            // 引き算の順序に気をつける
            b = pop();
            a = pop();
            push(a - b);
        } else if(s[0] == '*') {
            a = pop();
            b = pop();
            push(a * b);
        } else if(s[0] == '/') {
            // 割り算の順序に気をつける
            b = pop();
            a = pop();
            push(a / b);
        } else {
            // 演算子でない場合は入力された値を数値としてpushする
            push(atoi(s));
        }
    }
    //　最後に取り出して表示する
    printf("%d\n", pop());
    return 0;
}

/*
逆ポーランド記法で与えられた数式の計算
先頭からひとつづつ順番に文字列を読み込む
文字列が数値であればスタックに値を積む（一時的にデータを退避するときに有効なデータ構造
演算子であればスタックから値を二つ取り出して演算子結果をスタックに積む
これらを繰り返す

スタックの操作（最後に入ったものが最初に取り出される）
push(x)　トップにｘを追加
pop()　トップからｘを取り出す

*/