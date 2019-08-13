#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    int N;
    cin >> N;
    int A[N+1];
    int B[N];
    for(int i = 0; i < N+1; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];
    ll cnt = 0;
    for(ll i = 0; i < N; i++) {
        if(A[i] < B[i]) {
            B[i] -= A[i];
            cnt += A[i];
            A[i] = 0;
        } else if(A[i] == B[i]) {
            cnt += A[i];
            A[i] = 0;
            B[i] = 0;
        } else {
            A[i] -= B[i];
            cnt += B[i];
            B[i] = 0;
        }
        // while(A[i] > 0) {
        //     A[i]--;
        //     B[i]--;
        //     cnt++;
        //     if(B[i] == 0) break;
        // }
        if(B[i] != 0) {
            if(A[i+1] < B[i]) {
                B[i] -= A[i+1];
                cnt += A[i+1];
                A[i+1] = 0;
            } else if(A[i+1] == B[i]) {
                cnt += A[i+1];
                A[i+1] = 0;
                B[i] = 0;
            }  else {
                A[i+1] -= B[i];
                cnt += B[i];
                B[i] = 0;
            }
            // while(A[i+1] > 0) {
            //     A[i+1]--;
            //     B[i]--;
            //     cnt++;
            //     if(B[i] == 0) break;
            // }
        }
    }
    cout << cnt << endl;

    return 0;
}