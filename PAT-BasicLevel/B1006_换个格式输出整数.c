#include <stdio.h>

int main() {
    int n;
    int b, s, g, i;

    scanf("%d", &n);
    b = n / 100;
    s = n % 100 / 10;
    g = n % 10;
    for (i = 0; i < b; i++) putchar('B');
    for (i = 0; i < s; i++) putchar('S');
    for (i = 1; i <= g; i++) printf("%d", i);
    putchar('\n');
    return 0;
}
