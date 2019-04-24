#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    // cin >> str;
    while()
    getline(cin, str);
    int Alpha[26] = {0};
    for(int i = 0; i < str.length(); i++) {
       if(str[i] >= 'A' && str[i] <= 'Z') {
           Alpha[str[i]-'A']++;
       }
       if(str[i] >= 'a' && str[i] <= 'z') {
           Alpha[str[i]-'a']++;
       }
    }
    char alpha = 'a';
    for(int i = 0; i < 26; i++) {
        cout << alpha << " : " << Alpha[i] << endl;
        alpha++;
    }
    return 0;
}