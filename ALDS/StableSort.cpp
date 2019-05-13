#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void BubbleSort(string* array, int N) {
    for(int i = 0; i < N; i++) {
        for(int j = N-1; j > i; j--) if (array[j][1] < array[j-1][1]) swap(array[j], array[j-1]);
    }
}
void SelectionSort(string* array, int N) {
    for(int i = 0; i < N; i++) {
        int minj = i;
        for(int j = i; j < N; j++) if(array[j][1] < array[minj][1]) minj = j;
        swap(array[i], array[minj]);
    }
}
int main() {
    int n;
    cin >> n;
    string A[n];
    for(int i = 0; i < n; i++) cin >> A[i];
    string B[n];
    memcpy(B, A, sizeof(A));
    BubbleSort(A, n);
    SelectionSort(B, n);
    for(int i = 0; i < n; i++) i != n-1 ? cout << A[i] << ' ' : cout << A[i] << endl;
    cout << "Stable" << endl;
    for(int i = 0; i < n; i++) i != n-1 ? cout << B[i] << ' ' : cout << B[i] << endl;
    bool flag = false;
    for(int i = 0; i < n; i++) if(A[i] != B[i]) flag = true;
    flag ? cout << "Not stable" << endl : cout << "Stable" << endl;
    
    return 0;
}