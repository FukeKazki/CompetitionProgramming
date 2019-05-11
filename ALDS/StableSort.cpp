#include <iostream>

using namespace std;

BubbleSort(int C, int N) {
    for(int i = 0; i < N; i++) {
        for(int j = N-1; j > i; j--) {
            if(C[j] < C[j-1]) {
                swap(C[j], C[j-1]);
            }
        }
    }
}

SelectionSort(int C, int N) {
    for(int i = 0; i < N; i++) {
        minj = i;
        for(j = i; j < N; j++) {
            if(C[j] < C[minj]) minj = i;
        }
        swap(C[i], C[minj]);
    }
}
int main() {
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++) cin >> A[i];
    BubbleSort(A, n);
    SelectionSort(A, n);
    return 0;
}