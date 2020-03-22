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
    multiset<string> mset;
    set<string> set;
    REP(i, N){
        string s;
        cin >> s;
        mset.insert(s);
        set.insert(s);
    }
    vector<pair<int, string>> array(set.size());
    int i = 0;
    for (auto x : set)
    {
        int cnt = mset.count(x);
        array.push_back(make_pair(cnt, x));
        i++;
    }
    sort(array.begin(), array.end(), greater<pair<int,string> >());

    vector<string> ans;
    REP(i, set.size())
    {
        ans.push_back(array.at(i).second);
        if(array.at(i).first != array.at(i+1).first)
            break;
    }
    sort(ALL(ans));
    REP(i, ans.size()) {
        cout << ans.at(i) << endl;
    }

    return 0;
}