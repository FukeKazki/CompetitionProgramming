#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int H, W, h, w;
    int row;
    cin >> H >> W;
    cin >> h >> w;
    row = H - h;
    cout << (H*W - W*h) - (row*w) << endl;


    return 0;
}