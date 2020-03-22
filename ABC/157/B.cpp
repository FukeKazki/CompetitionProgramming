#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
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
    int A[3][3];
    REP(i, 3)
    {
        REP(j, 3)
        {
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    bool B[3][3] = {false};

    REP(i, N)
    {
        int b;
        cin >> b;
        REP(j, 3)
        {
            REP(k, 3)
            {
                if (b == A[j][k])
                {
                    B[j][k] = true;
                }
            }
        }
    }
    // REP(i, 3)
    // {
    //     REP(j, 3)
    //     {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // REP(i, 3)
    // {
    //     REP(j, 3)
    //     {
    //         cout << B[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    bool flag = false;
    if (B[0][0] && B[0][1] && B[0][2])
    {
        flag = true;
    }
    else if (B[1][0] && B[1][1] && B[1][2])
    {
        flag = true;
    }
    else if (B[2][0] && B[2][1] && B[2][2])
    {
        flag = true;
    }
    else if (B[0][0] && B[1][0] && B[2][0])
    {
        flag = true;
    }
    else if (B[0][1] && B[1][1] && B[2][1])
    {
        flag = true;
    }
    else if (B[0][2] && B[1][2] && B[2][2])
    {
        flag = true;
    }
    else if (B[0][0] && B[1][1] && B[2][2])
    {
        flag = true;
    }
    else if (B[0][2] && B[1][1] && B[2][0])
    {
        flag = true;
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}