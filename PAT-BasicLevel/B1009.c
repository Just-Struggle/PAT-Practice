#include <stdio.h>
#include <string.h>

int main() {
    char str[81][81];
    int i = 0, j;

    do {
        gets(str[i++]);
    } while (getchar() != '\n');

    for (j = i - 1; j >= 0; j--) {
        printf("%s", str[j]);
        if (j != 0) putchar(' ');
    }
    putchar('\n');

    return 0;
}
