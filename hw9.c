#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int len;
    const int diff = 'a' - 'A';

    
    printf("input> ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += diff;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= diff;
        }
    }
    printf("%s", str);

    return 0;
}