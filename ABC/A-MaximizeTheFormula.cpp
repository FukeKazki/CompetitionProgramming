#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if(A < B) swap(A, B);
    if(B < C) swap(B, C);
    if(A < B) swap(A, B);
    cout << A*10+B+C << endl; 
    return 0;
}