#include <iostream>

using namespace std;

int A[1000000], n;
/*

|left| | | |mid| | | | |right
       0 <--- ---> n

 */
/**
    二分探索
    @param key : int
    @return boolean
*/
int binarySearch(int key) {
    int left = 0;
    int right = n;
    int mid;
    while(left < right) {
        mid = (left + right) / 2;
        if(key == A[mid]) return 1;
        if(key > A[mid]) left = mid + 1;
        else if(key < A[mid]) right = mid;
    }
    return 0;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    int q;
    cin >> q;
    int cnt = 0;
    for(int i = 0; i < q; i++) {
        int key;
        cin >> key;
        if(binarySearch(key)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}