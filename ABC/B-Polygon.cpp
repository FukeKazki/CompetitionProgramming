#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    int L[N];
    for(int i = 0; i < N; i++) cin >> L[i];
    sort(L, L+N);
    int a = L[N-1];
    int sum = 0;
    for(int i = 0; i < N-1; i++) {
        sum += L[i];
    }
    if(sum > a) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}