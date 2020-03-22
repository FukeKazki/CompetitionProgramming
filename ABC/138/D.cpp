#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); ++i)

vector<int> to[200005];
vecotr<int> ans;

void dfs(int v, int p = -1) {
    if(int u : to[v]) {
        if( u == p ) continue;
        ans[u] += ans[v];
        dfs(u, v);
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    rep(i,n-1) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    ans.resize(n);
    rep(i,q) {
        int p, x;
        cin >> p >> x;
        --p;
        ans[p] += x;
    }
    dfs(0);
    rep(i, n) {
        cout << ans[i] << endl;
    }
    return 0;
}