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
    ll K, N;
    cin >> K >> N;
    vector<ll> A(N);
    REP(i, N)
    {
        cin >> A.at(i);
    }
    ll sum = 0;
    ll m = -1;
    REP(i, N)
    {
        if (!i)
            continue;
        if (i == N - 1)
        {
            if (A.at(0) == 0)
            {
                sum += K - A.at(i);
                m = max(m, K - A.at(i));
            }
            else
            {
                sum += K - A.at(i) + A.at(0);
                m = max(m, K - A.at(i) + A.at(0));
            }
        }
        sum += A.at(i) - A.at(i - 1);
        m = max(m, A.at(i) - A.at(i - 1));
    }
    cout << sum - m << endl;
    return 0;
}