#include <stdio.h>
#include <string.h>

int main(void) {
    /**
     * 文字列関連の処理
     */
    
    /**
     * char型
     * %c : 文字の表示
     * %d : ASCII Codeの変換
     */
    char x = 'A';
    printf("%c %d\n", x, x);

    /**
     * 文字列
     * char型の配列
     * %s: 文字列の表示
     * 終端は '\0' がある
     */
    char s[10] = "Hello";
    printf("%s\n", s);

    /**
     * strlen(str) : 文字列の長さ
     * strcpy(target, source) : targetへsourceをコピー
     * strncpy(target, source, n) : n文字コピー
     * strcat(target, source) : 文字列の連結
     * strncat(target, source, n) : n文字連結
     * strcmp(str1, str2) : 文字列の比較 str1 > str2 = "+" str1 == str2 = "0"
     * strchr(str, chr) : strから文字chrを検索 最初のポインタを返す
     * strstr(str, keyword) : strから文字列keywordを検索
     */

    return 0;
}