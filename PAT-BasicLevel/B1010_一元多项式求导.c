#include <stdio.h>

int main() {
    int flag = 0;
    int coef, exp;

    do {
        scanf("%d%d", &coef, &exp);

        if (exp) {
            if (flag) putchar(' ');
            printf("%d %d", coef * exp, exp - 1);
            flag = 1;
        }
    } while (getchar() != '\n');

    if (!flag) printf("0 0");
    putchar('\n');

    return 0;
}
