#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    // vector 動的配列
    // vector<型> オブジェクト名(要素数)
    vector<int> a(5);
    // vector<型> オブジェクト名{値0, 値1, ...}
    vector<int> org{4, 5, 6};
    cout<< a.size() << org.size() << endl;


    return 0;
}
//a.size() 大きさ
//a[i] i番目の要素
//a.front() 先頭を参照
//a.back() 末尾を参照
//a.push_back(a) 末尾にaを追加
//a.pop_back(); 末尾の要素を削除