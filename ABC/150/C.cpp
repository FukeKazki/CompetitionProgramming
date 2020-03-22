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
int main()
{
    int N;
    cin >> N;
    vector<int> P(N), Q(N), R(N);
    REP(i, N) {
        cin >> P.at(i);
    }
    REP(i, N) {
        cin >> Q.at(i);
    }
    REP(i, N) {
        R.at(i) = i + 1;
    }
    int a, b, cnt = 0;
    do
    {
        cnt++;
        if (P == R)
        {
            a = cnt;
        }
        if (Q == R) {
            b = cnt;
        }
    } while (next_permutation(ALL(R)));
    cout << abs(a - b) << endl;
    return 0;
}