#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define INF 1e9
#define ALL(v) v.begin(), v.end()

typedef long long ll;
/**
 * C問以降は ll を使う.
 * double型にするのを忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
*/

#define MAX 10000
#define NIL -1

struct Node { int parent, left, right; };

Node T[MAX];
int n, D[MAX], H[MAX];

void setDepth(int u, int d) {
    if (u == NIL) return;
    D[u] = d;
    setDepth(T[u].left, d+1);
    setDepth(T[u].right, d+1);
}

int setHeight(int u) {
    int h1 = 0, h2 = 0;
    if (T[u].left != NIL)
        h1 = setHeight(T[u].left) + 1;
    if (T[u].right != NIL)
        h2 = setHeight(T[u].right) + 1;
    return H[u] = (h1 > h2 ? h1 : h2);
}

int getSibling(int u) {
    if (T[u].parent == NIL) return NIL;
    if (T[T[u].parent].left != u && T[T[u].parent].left != NIL)
        return T[T[u].parent].left;
    if (T[T[u].parent].right != u && T[T[u].parent].right != NIL)
        return T[T[u].parent].right;
    return NIL;
}

void print(int u) {
    printf("node %d: ", u);
    printf("parent = %d, ", T[u].parent);
    // 兄弟の数
    printf("sibling = %d, ", getSibling(u));
    // 子の数
    int deg = 0;
    if (T[u].left != NIL) deg++;
    if (T[u].right != NIL) deg++;
    printf("degree = %d, ", deg);
    // 根からの深さ
    printf("depth = %d, ", D[u]);
    // 一番遠い葉までの距離
    printf("height = %d, ", H[u]);

    if (T[u].parent == NIL) {
        printf("root\n");
    } else if (T[u].left == NIL && T[u].right == NIL) {
        printf("leaf\n");
    } else {
        printf("internal node\n");
    }
}

int main()
{
    int n;
    cin >> n;
    REP(i, n) T[i].parent = NIL;
    REP(i, n) {
        int v, l, r;
        cin >> v >> l >> r;
        T[v].left = l;
        T[v].right = r;
        if (l != NIL) T[l].parent = v;
        if (r != NIL) T[r].parent = v;
    }

    int root = 0;
    REP(i, n) if (T[i].parent == NIL) root = i;

    setDepth(root, 0);
    setHeight(root);

    REP(i, n) print(i);

    return 0;
}