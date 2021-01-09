#include <stdio.h>
#include <string.h>

int main() {
    char a[1001];
    int b, q, r, len, i, temp;

    scanf("%s %d", a, &b);

    len = strlen(a);
    r = 0;
    for (i = 0; i < len; i++) {
        temp = r * 10 + a[i] - '0';
        q = temp / b;
        r = temp % b;
        if (!i && !q && len != 1) continue;
        printf("%d", q);
        if (i == len - 1) printf(" %d\n", r);
    }

    return 0;
}