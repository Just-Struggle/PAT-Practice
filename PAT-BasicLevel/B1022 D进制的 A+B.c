#include <stdio.h>

int main() {
    int a, b, d, i, sum;
    char s[32];

    scanf("%d %d %d", &a, &b, &d);

    sum = a + b;
    i = 0;
    do {
        s[i++] = sum % d + '0';
        sum /= d;
    } while (sum);
    s[i] = '\0';

    for (--i; i >= 0; i--) putchar(s[i]);
    putchar('\n');

    return 0;
}
