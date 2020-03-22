#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define MM(i, n, m) for (int i = m; i <= n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long ll;
const ll INF = 1e9;
const ll MOD = 10e9 + 7;
/**
 * C問以降は ll を使う.
 * double型にするのを忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
 * v.push_back(m) vectorへの追加
 * v.size() vectorの大きさ
 * pair<型, 型> 変数名
 * p.first, p.second
 * map<型, 型> 変数名  // 連想配列
 * priority_queue<型> 変数名  // 最大値から出てくるヒープ
*/
int main()
{
    cin.tie(0);

    string S;
    cin >> S;
    if (S.at(0) != S.at(1) && S.at(1) != S.at(2) && S.at(2) != S.at(0))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}