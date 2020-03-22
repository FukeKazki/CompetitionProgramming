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
    ll N;
    cin >> N;
    map<ll, ll> mp;
    vector<ll> A(N);
    REP(i, N)
    {
        ll a;
        cin >> a;
        A.at(i) = a;
        mp[a]++;
    }

    ll sum = 0;

    for (pair<ll, ll> p : mp)
    {
        sum += p.second * (p.second - 1) / 2;
    }

    REP(i, N)
    {
        ll ans = sum;
        ll a = A.at(i);
        ll b = mp[a];
        ans -= b * (b - 1) / 2;
        ans += (b - 1) * (b - 2) / 2;
        cout << ans << endl;
    }

    // for (pair<int, int> p : mp)
    // {
    //     cout << p.first << p.second << endl;
    // }
    return 0;
}