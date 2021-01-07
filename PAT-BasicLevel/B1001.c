#include <stdio.h>

int main(void) {
    int n;
    int steps = 0;
    scanf("%d", &n);
    while (n != 1) {
        if (n & 1)
            n = n + (n + 1 >> 1);  // + 优先级高于 >>
        else
            n = n >> 1;
        steps++;
    }
    printf("%d\n", steps);

    return 0;
}