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
    double area = (W * H) / 2;
    printf("%.6lf %d\n", area, x + x == W && y + y == H);
    return 0;
}