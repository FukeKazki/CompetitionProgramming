#include <iostream>

using namespace std;

int main() {
    int Student[50][3] ;
    int i = 0;
    while(1) {
        int m, f, r;
        cin >> m >> f >> r;
        if(m == -1 && f == -1 && r == -1) break;
        Student[i][0] = m;
        Student[i][1] = f;
        Student[i][2] = r;
        i++;
    }
    for(int j = 0; j < i; j++) {
        if (Student[j][0] == -1 || Student[j][1] == -1) cout << 'F' << endl;
        else if (Student[j][0] + Student[j][1] >= 80) cout << 'A' << endl;
        else if (Student[j][0] + Student[j][1] >= 65) cout << 'B' << endl;
        else if (Student[j][0] + Student[j][1] >= 50 || Student[j][2] >= 50) cout << 'C' << endl;
        else if (Student[j][0] + Student[j][1] >= 30) cout << 'D' << endl;
        else cout << 'F' << endl;
    }

    return 0;
}