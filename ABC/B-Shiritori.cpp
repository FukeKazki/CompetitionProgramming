#include <iostream>
#include <string.h>

using namespace std;
int cntWord(char* word) {
    int cnt = 0;
    while(word[cnt] != '\0') {
        cnt++;
    }
    return cnt;
}
int main() {
    int N;
    cin >> N;
    bool flag = false;
    char word[N][20];
    for(int i = 0; i < N; i++) {
        cin >> word[i];
        if(i != 0) {
            int cnt = cntWord(word[i-1]);
            if(word[i][0] != word[i-1][cnt-1]) {
                flag = true;
            }
            for(int j = 0; j < i; j++) {
                if(i == j) continue;
                if(strcmp(word[i], word[j]) == 0) flag = true;
            }
        }
    }
    flag ? cout << "No" << endl : cout << "Yes" << endl;

    return 0;
}