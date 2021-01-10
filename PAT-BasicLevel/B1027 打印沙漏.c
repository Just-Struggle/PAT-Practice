#include <stdio.h>

int main() {
    int n, i, j, k, sum;
    char c;

    scanf("%d %c", &n, &c);

    for (i = 3, sum = 1; sum + 2 * i <= n; i += 2) sum += 2 * i;
    i -= 2;

    for (j = i; j > 0; j -= 2) {
        for (k = 0; k < (i - j) / 2; k++) putchar(' ');
        for (k = 0; k < j; k++) putchar(c);
        putchar('\n');
    }
    for (j = 3; j <= i; j += 2) {
        for (k = 0; k < (i - j) / 2; k++) putchar(' ');
        for (k = 0; k < j; k++) putchar(c);
        putchar('\n');
    }

    printf("%d\n", n - sum);

    return 0;
}
