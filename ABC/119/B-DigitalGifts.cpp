#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    int N;
    cin >> N;
    double sum = 0;
    double jp = 0;
    double bt = 0;
    for(int i = 0; i < N; i++) {
        double x;
        string u;
        cin >> x >> u;
        if(u == "JPY") {
            jp += x;
        } else if(u == "BTC") {
            bt += x;
        }
    }
    // cout << jp << " " << bt << endl;
    bt *= 380000;
    // cout << jp << " " << bt << endl;
    printf("%.5lf", jp+bt);
    // cout << jp + bt << endl;

}