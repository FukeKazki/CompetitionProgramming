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

    vector<int> v = {3, 1, 4, 2, 5};
    sort(v.begin(), v.end());
    for_each(v.begin(), v.end(), [](int x) {
        cout << x << endl;
    });

    // 2次元配列
    /**
     * vector<vector<型>> 変数名(要素1, vector<型>(要素2, 初期値))
     * 初期値は省略可能
     * 変数名.at(i).at(j) でアクセス
     * 変数名.size() で i の大きさ
     * 変数名.at(0).size() で j の大きさ
     */
    vector<vector<int>> data = {
        {7, 4, 0, 8},
        {2, 0, 3, 5},
        {6, 1, 7, 0},
    };

    vector<vector<int>> data2(3, vector<int>(4));

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> data2.at(i).at(j);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(j != 0) cout << " ";
            cout << data2.at(i).at(j);
        }
        cout << endl;
    }



    return 0;
}
//a.size() 大きさ
//a[i] i番目の要素
//a.front() 先頭を参照
//a.back() 末尾を参照
//a.push_back(a) 末尾にaを追加
//a.pop_back(); 末尾の要素を削除
/*
v.assing(first, lase) :void
first-lastの範囲のデータをvectorに代入できる
 */