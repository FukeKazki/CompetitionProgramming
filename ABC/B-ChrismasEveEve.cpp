#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    int P[N];
    for(int i = 0; i < N; i++) cin >> P[i];
    sort(P, P+N);
    P[N-1] /= 2;
    int sum = 0;
    for(int i = 0; i < N; i++) sum += P[i];
    cout << sum << endl;
    return 0;
}