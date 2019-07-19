#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

int getChar(char ch) {
    if(ch == 'A') return 1;
    if(ch == 'C') return 2;
    if(ch == 'G') return 3;
    if(ch == 'T') return 4;
    return 0;
}

long long getKey(char str[]) {
    long long sum = 0, p = 1;
    for(int i = 0; i < strlen(str); i++) {
        // 五進数にする 衝突を防ぐ
        sum += p*(getChar(str[i]));
        cout << "getKey: " << p << " : " << sum << endl;
        p *= 5;
    }
    return sum;
}

int h1(int key) { return key % M; }
int h2(int key) { return 1 + (key % (M - 1)); }

int find(char str[]) {
    long long key = getKey(str);
    for(int i = 0; ; i++) {
        // 計算結果は i に依存する h2 ずつずれていく
        long long h = (h1(key) + i*h2(key)) % M;
        if(strcmp(H[h], str) == 0) {
            return 1;
        } 
        else if(strlen(H[h]) == 0) return 0;
    }
}

int insert(char str[]) {
    long long key = getKey(str);
    for(int i = 0; ; i++) {
        long long h = (h1(key) + i*h2(key)) % M;
        // 同じ値が存在すれば終わり
        if(strcmp(H[h], str) == 0) return 0;
        // 中身が空であれば挿入
        else if(strlen(H[h]) == 0) {
            strcpy(H[h], str);
            return 0;
        }
    }
    return 0;
}

int main() {
    for(int i = 0; i < M; i++) H[i][0] = '\0';
    int n;
    scanf("%d", &n);
    // 処理
    for(int i = 0; i < n; i++) {
        char str[L], com[9];
        scanf("%s %s", com, str);
        if(com[0] == 'i') {
            insert(str);
        } else {
            if(find(str)) {
                printf("yes\n");
            }else {
                printf("no\n");
            }
        }
    }

    return 0;
}