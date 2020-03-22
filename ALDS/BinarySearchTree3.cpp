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
 * pair<型, 型> 変数名
 * map<型, 型> 変数名  // 連想配列
 * priority_queue<型> 変数名  // 最大値から出てくるヒープ
*/

// Nodeの定義
struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

// 左をたどれば最小値になる
Node * treeMinimum(Node *x) {
    while(x->left != NIL) x = x->left;
    return x;
}

Node * find(Node *u, int k) {
    // uがNILでない かつ u==keyでない間 
    while(u != NIL && k != u->key) {
        // kよりもuのkeyのほうが大きければ左を潜る　違ったら右を潜る
        if (k < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}

// zの次節点を探す
Node * treeSuccessor(Node *x) {
    // 右の子が存在するとき、右部部分木で最も小さい値を求める
    if(x->right != NIL) return treeMinimum(x->right);

    // おまえいらんやんけ！！！
    Node *y = x->parent;
    while(y!=NIL && x == y->right) {
        x = y;
        y = y->parent;
    }
    return y;
}

void treeDelete(Node *z) {
    Node *y;
    Node *x;
    if(z->left == NIL || z->right == NIL) y = z;
    else y = treeSuccessor(z);

    if(y->left != NIL) {
        x = y->left;
    } else {
        x = y->right;
    }

    if(x != NIL) {
        x->parent = y->parent;
    }

    if(y->parent == NIL) {
        root = x;
    } else {
        if(y == y->parent->left) {
            y->parent->left = x;
        } else {
            y->parent->right = x;
        }
    }

    if(y!=z) {
        z->key = y->key;
    }
    free(y);
}

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

// 中間順巡回: 昇順に並ぶ
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
    int n;
    cin >> n;

    REP(i, n) {
        string com;
        cin >> com;
        if(com == "find") {
            int x;
            cin >> x;
            Node *t = find(root, x);
            if(t != NIL) printf("yes\n");
            else printf("no\n");
        } else if (com == "insert") {
            int x;
            cin >> x;
            insert(x);
        } else if(com == "print") {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        } else if(com == "delete") {
            int x;
            cin >> x;
            treeDelete(find(root, x));
        }
    }
    return 0;
}