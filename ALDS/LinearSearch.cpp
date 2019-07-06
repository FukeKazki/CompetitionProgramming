#include <iostream>

using namespace std;

int isSearch(int A[], int n, int key) {
    int i = 0;
    A[n] = key;
    // ループ内の条件式が一つなのでfor文で書くより早い
    while(A[i] != key) i++;
    return i != n;
}

int main() {
    int n, cnt = 0;
    cin >> n;
    int A[n+1];
    for(int i = 0; i < n; i++) cin >> A[i];
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int key;
        cin >> key;
        if(isSearch(A, n, key)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}