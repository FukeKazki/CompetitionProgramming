#include <iostream>
#include <string>
#include <utility> // pairが入ってる

using namespace std;

int main() {
    pair<int, float> pairif;
    pairif.first = 1;
    pairif.second = 2.3f;

    pair<int, double> a = make_pair(10, 3.5);
    cout << a.first << " : " << a.second << endl;

    cout << pairif.first << " : " << pairif.second << endl;
    return 0;
}