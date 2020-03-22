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
*/

/* ===== コーナーケースに気をつけろ ===== */
int main()
{
    int N, K;
    cin >> N >> K;
    double maxK = -1;
    vector<int> p(N);
    vector<long double> kitai(N);
    // 期待値の計算
    REP(i, N)
    {
        cin >> p.at(i);
        kitai.at(i) = (1.0 + p.at(i)) / 2.0;
    }
    vector<double> s(N + 1, 0);
    // 累積和
    REP(i, N)
    {
        s.at(i + 1) = s.at(i) + kitai.at(i);
    }
    // 区間の計算
    REP(i, N - K + 1)
    {
        maxK = max(maxK, s.at(i + K) - s.at(i));
    }

    printf("%.7lf\n", maxK);

    return 0;
}