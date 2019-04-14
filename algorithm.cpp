#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>

using namespace std;

int main() {
    int arr[10] = {1, 2, 1, 5, 4, 7, 5, 8, 9, 10};
    //sort(開始地点のポインタ、終了地点のポインタ)
    sort(arr,arr+10);
    //reverse(開始地点のポインタ、終了地点のポインタ)
    reverse(arr, arr+10);
    //fill(開始地点のポインタ、終了地点のポインタ,置換したい文字)
    fill(arr+5, arr+10, 9);
    for(int i = 0; i < 10; i++) cout << arr[i] << endl;

    return 0;
}