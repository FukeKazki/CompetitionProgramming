#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    t = "入力された文字列は、";
    cout << "文字列を入力:";
    cin >> s;
    cout << t + s << "です" << endl;
    cout << "文字列の長さは:" << s.length() << "です" << endl;

    //s.length() 長さ
    //+ == 連結 比較
    //s.substr(i, k) i番目以降k文字を抽出して得られる文字列
    //s.find(t) sの中に文字列tがあればその先頭アドレスを返す。なければs.nopsを返す
    //s.replace(i, k, t) i番目以降k文字を文字列tでで置換する。tを空文字にすれば削除する
    //s.insert(i, t) i番目の文字の前に文字列tを挿入
    return 0;
}