#include <math.h>
#include <stdio.h>

int main() {
    int c1, c2;
    int h, m, s;

    scanf("%d %d", &c1, &c2);

    s = round((double)(c1 - c2) / 100);
    h = s / 3600;
    s = s % 3600;
    m = s / 60;
    s = s % 60;
    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}
