#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    int W, H, x, y;
    cin >> W >> H >> x >> y;
    printf("%.8lf %d\n", double(W)*double(H)/2, (x + x) == W && (y + y) == H);
    return 0;
}