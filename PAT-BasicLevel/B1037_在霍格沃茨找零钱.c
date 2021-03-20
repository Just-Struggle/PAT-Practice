#include <math.h>
#include <stdio.h>

int main() {
    int p[3][3], i, temp, sum[2];

    for (i = 0; i < 2; i++) scanf("%d.%d.%d", &p[i][0], &p[i][1], &p[i][2]);

    for (i = 0; i < 2; i++) sum[i] = p[i][0] * 17 * 29 + p[i][1] * 29 + p[i][2];
    temp = sum[1] - sum[0];

    p[2][2] = temp % 29;
    temp /= 29;
    p[2][1] = temp % 17;
    p[2][0] = temp / 17;

    printf("%d.%d.%d\n", p[2][0], abs(p[2][1]), abs(p[2][2]));

    return 0;
}
