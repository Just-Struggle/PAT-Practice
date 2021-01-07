#include <stdio.h>
#include <string.h>

int main() {
    int pa[2] = {0};
    int da[2], len, i, j;
    char a[2][10];

    scanf("%s %d %s %d", a[0], &da[0], a[1], &da[1]);

    for (i = 0; i < 2; i++) {
        len = strlen(a[i]);
        for (j = 0; j < len; j++)
            if (a[i][j] - '0' == da[i]) pa[i] = pa[i] * 10 + da[i];
    }

    printf("%d\n", pa[0] + pa[1]);

    return 0;
}