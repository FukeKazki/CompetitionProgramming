#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    char str;
    int Alpha[26] = {0};
    while((str = getchar()) != EOF) {
        if(str >= 'A' && str <= 'Z') Alpha[str-'A']++;
        if(str >= 'a' && str <= 'z') Alpha[str - 'a']++;
    }
    char alpha = 'a';
    for(int i = 0; i < 26; i++) {
        cout << alpha << " : " << Alpha[i] << endl;
        alpha++;
    }
    return 0;
}