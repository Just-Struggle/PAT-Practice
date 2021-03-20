#include <stdio.h>
#include <string.h>

int main() {
    char a[10000], result[20000];
    int i, j, e, r, len, exp;

    scanf("%s", a);

    len = strlen(a);
    for (e = 4; e < len; e++)  // E 至少在第4位
        if (a[e] == 'E') break;
    sscanf(a + e + 1, "%d", &exp);

    r = 0;
    if (a[0] == '-') result[r++] = '-';
    if (exp < 0) {
        result[r++] = '0';
        result[r++] = '.';
        for (i = -1; i > exp; i--) result[r++] = '0';
        result[r++] = a[1];
        for (i = 3; i < e; i++) result[r++] = a[i];
        result[r] = '\0';
    } else {
        result[r++] = a[1];
        if (exp >= e - 3) {
            for (i = 3; i < e; i++) result[r++] = a[i];
            for (i = 0; i < exp - e + 3; i++) result[r++] = '0';
            result[r] = '\0';
        } else {
            for (i = 3; i < 3 + exp; i++) result[r++] = a[i];
            result[r++] = '.';
            for (i = 3 + exp; i < e; i++) result[r++] = a[i];
            result[r] = '\0';
        }
    }

    printf("%s\n", result);

    return 0;
}