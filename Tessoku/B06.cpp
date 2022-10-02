#include <iostream>
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
  int N, Q;
  cin >> N;
  int A[N];
  REP(i, N)
  {
    cin >> A[i];
  }
  // あたりの累積わ
  int wins[N + 1];
  wins[0] = 0;
  FOR(i, N + 1, 1)
  {
    if (A[i - 1] == 1)
    {
      wins[i] = wins[i - 1] + 1;
    }
    else
    {
      wins[i] = wins[i - 1];
    }
  }
  // はずれの累積わ
  int loses[N + 1];
  loses[0] = 0;
  FOR(i, N + 1, 1)
  {
    if (A[i - 1] == 0)
    {
      loses[i] = loses[i - 1] + 1;
    }
    else
    {
      loses[i] = loses[i - 1];
    }
  }

  // cout << "aha-" << endl;
  // REP(i, N + 1)
  // {
  //   cout << wins[i] << ", ";
  // }
  // cout << endl;
  // REP(i, N + 1)
  // {
  //   cout << loses[i] << ", ";
  // }
  // cout << endl;
  cin >> Q;

  REP(i, Q)
  {
    int L, R;
    cin >> L >> R;
    // 出力
    int win = wins[R] - wins[L - 1];
    int lose = loses[R] - loses[L - 1];
    if (win > lose)
    {
      cout << "win" << endl;
    }
    else if (win < lose)
    {
      cout << "lose" << endl;
    }
    else
    {
      cout << "draw" << endl;
    }
  }
  return 0;
}
// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ce