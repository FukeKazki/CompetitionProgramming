#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define INF 1e9
#define ALL(v) v.begin(), v.end()

typedef long long ll;

/**
 * 不安なら ll を使う.
 * 小数は double を忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
 * pair<型, 型> 変数名
 * map<型, 型> 変数名  // 連想配列
 * priority_queue<型> 変数名  // 最大値から出てくるヒープ
*/

/* ===== コーナーケースに気をつけろ ===== */

int main()
{
    ll N, A, B;
    cin >> N >> A >> B;
    ll sum = (N / (A + B)) * A;
    sum += min(N % (A + B), A);
    cout << sum << endl;
    return 0;
}