#include <stdio.h>

int main() {
    int n, i, j, col;
    char c;

    scanf("%d %c", &n, &c);

    col = n / 2 + n % 2;
    for (i = 0; i < col; i++) {
        putchar(c);
        if (i == 0 || i == col - 1)
            for (j = 1; j < n - 1; j++) putchar(c);

        else
            for (j = 1; j < n - 1; j++) putchar(' ');
        putchar(c);
        putchar('\n');
    }

    return 0;
}
