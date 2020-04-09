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
 * 比較するときは型まで注意
 * 区間の計算は累積和
*/

/* ===== コーナーケースに気をつけろ ===== */

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    int sum = 0;
    REP(i, N) {
        cin >> A.at(i);
        sum += A.at(i);
    }
    int cnt = 0;

    REP(i, N) {
        if (A.at(i) >= (double)sum / (4*M)) {
            ++cnt;
        }
    }
    cout << (cnt >= M ? "Yes" : "No") << endl;
    return 0;
}