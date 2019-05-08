#include <iostream>

using namespace std;
int main() {
    class Dice {
        public:
            int men[6];
            int tmp[6];
            void setMen(int i, int value) {men[i] = value;}
            void getMen() {cout << men[2] << endl;}
            void clearMen() {for(int i = 0; i < 6; i++) tmp[i] = men[i];}
            void SwitchMen (int a, int b) {
                int c = 7-a;
                int d = 7-b;
                int cnt = 0;
                int e, f;
                for(int i = 1; i < 7; i++) {
                    if(i != a && i != b && i != c && i !=d) {
                        if(cnt == 0) e = i;
                        else f = i; 
                    }
                }
                if(a == 6) cout << men[e] << endl;
                if(a == 1) cout << men[f] << endl;
                if(a == 3) cout << men[f] << endl;

            }
    };

    Dice dice;
    for(int i = 0; i < 6; i++) {
        int tmp;
        cin >> tmp;
        dice.setMen(i, tmp);
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        dice.SwitchMen(a, b);
        
    }


    return 0;
}