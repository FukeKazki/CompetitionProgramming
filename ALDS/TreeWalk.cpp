#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define MM(i, n, m) for (int i = m; i <= n; i++)
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
struct Node { int p, l, r; };
struct Node T[MAX];
int n;

void preParse(int u) {
    if (u==NIL) return;
    printf(" %d", u);
    preParse(T[u].l);
    preParse(T[u].r);
}

void inParse(int u) {
    if (u==NIL) return;
    inParse(T[u].l);
    printf(" %d", u);
    inParse(T[u].r);
}

void postParse(int u) {
    if (u==NIL) return;
    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d", u);
}

int main()
{
    int root;
    cin >> n;
    REP(i, n) T[i].p = NIL;
    REP(i, n) {
        int v, l, r;
        cin >> v >> l >> r;
        T[v].l = l;
        T[v].r = r;
        if (l != NIL) T[l].p = v;
        if (r != NIL) T[r].p = v;
    }
    REP(i, n) if(T[i].p == NIL) root = i;
    cout << "Preorder" << endl;
    preParse(root);
    cout << endl;
    cout << "Inorder" << endl;
    inParse(root);
    cout << endl;
    cout << "Postorder" << endl;
    postParse(root);
    cout << endl;
    return 0;
}