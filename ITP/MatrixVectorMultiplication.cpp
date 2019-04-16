#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[n][m] ,B[m];
    int sum = 0;
    int result[n];
    for(int i = 0; i < n; i++) {
        result[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < m; i++) cin >> B[i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum = A[i][j]*B[j];
            // cout << "sumの結果" << sum << endl;
            result[i] += sum;
        }
        // cout << "for文内のresult結果" << result[i] << endl;
    }

    for(int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }

    return 0;
}