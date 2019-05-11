#include <iostream>

using namespace std;

int main() {
    int R, G, B, N;
    cin >> R >> G >> B >> N;
    int cnt = 0;
    if(R < G) {
        swap(R, G);
    }
    if(G < B) {
        swap(G, B);
    }
    if(R < G) {
        swap(R, G);
    }
    for(int i = 0; i <= N/R; i++) {
        if(R*i == N) {cnt++; continue;}
        for(int j = 0; j <= N/G; j++) {
            if(R*i + G*j == N) {cnt++; continue;}
            for(int k = 0; k <= N/B; k++) {
                if(R*i + G*j + B*k == N) {cnt++; break;}
            }
        }
    }
    cout << cnt << endl;
    return 0;
}