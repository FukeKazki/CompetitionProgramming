#include <iostream>

using namespace std;

int main() {
    int sets[4][10000];
    int n, x;
    int i = 0;
    while(1) {
        cin >> n >> x;
        if(n == 0 && x == 0) break;
        int counter = 0;

        for(int j = n; j >= 3; j--) {
            for( int k = j-1; k >= 2; k--) {
                for(int l = k-1; l >= 1; l--) {
                    int sum = j+k+l;    
                    if(x == sum)  counter++;
                }
            }
        }
        cout << counter << endl;
    }
    


    return 0;
}