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
    string s;
    cin >> s;
    deque<char> deq;
    REP(i, s.size())
    {
        deq.push_back(s[i]);
    }

    int q;
    cin >> q;
    bool flip = false;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            flip = !flip;
        }
        if (t == 2)
        {
            int f;
            char c;
            cin >> f;
            cin >> c;
            // 通常
            if (!flip)
            {
                if (f == 1)
                {
                    deq.push_front(c);
                }
                else
                {
                    deq.push_back(c);
                }
            }
            // 反転時
            if (flip)
            {
                if (f == 2)
                {
                    deq.push_front(c);
                }
                else
                {
                    deq.push_back(c);
                }
            }
        }
    }

    if (flip)
    {
        while (!deq.empty())
        {
            char v = deq.back();
            deq.pop_back();
            cout << v;
        }
        cout << endl;
    }
    else
    {
        while (!deq.empty())
        {
            char v = deq.front();
            deq.pop_front();
            cout << v;
        }
        cout << endl;
    }

    return 0;
}