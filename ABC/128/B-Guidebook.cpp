#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S[N];
    int P[N];
    for(int i = 0; i < N; i++) cin >> S[i] >> P[i];
    int swaped[N];
    for(int i = 0; i < N; i++) swaped[i] = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 1; j < N; j++) {
            if( (S[i]==S[j] && P[i]<P[j]) || (S[i] > S[j])) {
                swaped[i]++;
            }
        }
    }
    int cnt = 0;
    for(int j = 0; j < N; j++) {
        for(int i = 0; i < N; i++) {
            if(swaped[i] == cnt) {
                cout << i+1 << endl;
            }
        }
        cnt++;
    }

    return 0;
}
/*
vector<tuple<string, int, int>> a;
for(int i = 1; i <= N; i++) {
    string S;
    int P;
    cin >> S >> P;
    P = -P;
    a.push_back(tie(s, p, i));
}
sort(a.begin(), a.end());
for(int i = 0; i < N; i++) {
    string S;
    int p;
    int id;
    tie(s, p, id) = a[i];
    cout << id << endl;
}

*/