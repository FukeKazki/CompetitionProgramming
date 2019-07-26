#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int A[M];
    for(int i = 0; i < M; i++) A[i] = 0;
    for(int i = 0; i < N; i++) {
        int K;
        cin >> K;
        for(int j = 0; j < K; j++) {
            int a;
            cin >> a;
            A[a-1]++;
        }
    }
    int cnt = 0;
    for(int i = 0; i < M; i++) {
        if(A[i] == N) {
            cnt++;
        }
    }
    cout << cnt << endl;

}