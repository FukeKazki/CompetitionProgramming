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

struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k) {
    // y: parent
    Node *y = NIL;
    Node *x = root;
    // z: myself
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z -> key = k;
    z -> left = NIL;
    z -> right = NIL;

    while( x != NIL) {
        y = x;
        if (z -> key < x -> key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    z -> parent = y;
    if( y == NIL) {
        root = z;
    } else {
        if (z->key < y->key) {
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

void inorder(Node *u) {
    if (u==NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}
void preorder(Node *u) {
    if (u==NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}
int main()
{
    int n, x;
    string com;
    cin >> n;
    REP(i, n) {
        cin >> com;
        if (com == "insert") {
            cin >> x;
            insert(x);
        } else if(com == "print") {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
    return 0;
}