#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    vector <int> B = A;
    sort(B.begin(), B.end());
    for(int i = 0; i < N; i++) {
        int j = N-1;
        if(A.at(i) == B.at(j)) {
            j--;
        }
        cout << B.at(j) << endl;
    }
}