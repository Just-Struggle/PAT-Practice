#include <stdio.h>
#include <string.h>

int main() {
    char str[5], re[5], c;
    int n, i, j, a, b;

    scanf("%d", &n);

    do {
        sprintf(str, "%04d", n);

        for (i = 0; i < 4; i++) {
            for (j = 3; j > i; j--)
                if (str[j] > str[j - 1]) {
                    c = str[j];
                    str[j] = str[j - 1];
                    str[j - 1] = c;
                }
            re[3 - i] = str[i];
        }
        re[4] = '\0';

        sscanf(str, "%d", &a);
        sscanf(re, "%d", &b);
        n = a - b;
        printf("%04d - %04d = %04d\n", a, b, n);
    } while (n != 6174 && n != 0);

    return 0;
}
