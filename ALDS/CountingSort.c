// #include <bits/stdc++.h>
// using namespace std;
// #define REP(i, n) for(int i = 0; i < (n); ++i)
// #define REPR(i, n) for (int i = n; i >= 0; --i)
// #define FOR(i, n, m) for (int i = m; i < n; i++)
// #define INF 1e9
// #define ALL(v) v.begin(), v.end()
#include <stdio.h>
#include <stdlib.h>
// typedef long long ll;
/**
 * C問以降は ll を使う.
 * double型にするのを忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
*/

#define MAX 2000001
#define VMAX 10000

int main()
{
    unsigned short *A, *B;
    int C[VMAX + 1];
    int n, i, j;
    scanf("%d", &n);
    // vector<int> A(n+1);
    // nの数に応じた配列の準備

    // A: 元の配列
    A = malloc(sizeof(short) * n + 1);
    // B: ソート済みの配列
    B = malloc(sizeof(short) * n + 1);

    // Cを0埋め
    for(i = 0; i <= VMAX; i++) C[i] = 0;

    for(i = 0; i < n; i++) {
        // h: short
        // u: unsigned int

        // A[1]から埋める
        scanf("%hu", &A[i+1]);
        // A[1]が0のときC[0]に入るため
        C[A[i + 1]]++;
    }

    // Cの各要素の累積和を求める
    for(i = 1; i <= VMAX; i++) C[i] = C[i] + C[i-1];

    // A[n] = {null, 4, 5, 0, 3, 1, 5, 0, 5}
    // C[n] = {2, 3, 3, 4, 5, 8, 8}
    
    // 不安定
    for(j = 1; j <= n; j++) {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }

    //  安定
    // for(j = n; j >= 1; j--) {
    //     B[C[A[j]]] = A[j];
    //     C[A[j]]--;
    // }

    for(i = 1; i <= n; i++) {
        if (i > 1) printf(" ");
        printf("%d", B[i]);
    }
    printf("\n");
    return 0;
}