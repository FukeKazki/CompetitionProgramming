#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define FOR(i, n, m) for (int i = m; i < n; i++)
#define INF 1e9
#define ALL(v) v.begin(), v.end()

typedef long long ll;
/**
 * C問以降は ll を使う.
 * double型にするのを忘れない.
 * nC2の求め方 (1/2)*n*(n-1)
 * vector<型> 変数名(要素数, 初期値)
 */
int partition(vector<int>& A, int p, int r) {
    // xに基準を入れる
    int x = A[r];
    int i = p;
    // pとrの範囲でぐるぐる
    FOR(j, r, p) {
        // j番目がx以下のときi番目と交換
        if(A[j] <= x) {
            swap(A[i], A[j]);
            i++;
        }
    }
    // 最後に交換（ifで動かした回数 = i)
    swap(A[i], A[r]);
    return i;
}
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    REP(i, n) cin >> A.at(i);
    int q = partition(A, 0, n-1);
    REP(i, n) {
        if(i) cout << " ";
        if(i == q) cout << "[";
        cout << A[i];
        if(i == q) cout << "]";
    }
    cout << endl;
    return 0;
}