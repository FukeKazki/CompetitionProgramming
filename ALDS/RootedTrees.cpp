#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define INF 1e9
#define ALL(v) v.begin(), v.end()

typedef long long ll;
#define MAX 100005
#define NIL -1
/**
 * C問以降は ll を使う.
 * double型にするのを忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
*/

struct Node { int p, l, r; };

Node T[MAX];
int n, D[MAX];

void print(int u) {
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].p << ", ";
    cout << "depth = " << D[u] << ", ";

    if (T[u].p == NIL) cout << "root, ";
    else if (T[u].l == NIL) cout << "leaf, ";
    else cout << "internal node, ";

    cout << "[";

    for (int i = 0, c = T[u].l; c != NIL; i++, c = T[c].r) {
        if (i) cout << ", ";
        cout << c;
    }

    cout << "]" << endl;
}

int rec(int u, int p) {
    D[u] = p;
    if (T[u].r != NIL) rec(T[u].r, p);
    if (T[u].l != NIL) rec(T[u].l, p+1);
}

int main() {
    int n;
    cin >> n;
    REP(i, n) {
        T[i].p = T[i].l = T[i].r = NIL;
    }

    REP(i, n) {
        int v, d;
        cin >> v >> d;
        REP(j, d) {
            int c, l;
            cin >> c;
            if (j == 0) T[v].l = c;
            else T[l].r = c;
            l = c;
            T[c].p = v;
        }
    }

    int r;
    REP(i, n) {
        if (T[i].p == NIL) r = i;
    }

    rec(r, 0);

    REP(i, n) print(i);

    return 0;
}