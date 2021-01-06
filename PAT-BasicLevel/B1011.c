#include <stdio.h>

int main() {
    int t, i;
    long long cmp[10][3];

    scanf("%d", &t);
    for (i = 0; i < t; i++)
        scanf("%lld %lld %lld", &cmp[i][0], &cmp[i][1], &cmp[i][2]);

    i = 0;
    while (i < t)
        if (cmp[i][0] + cmp[i][1] > cmp[i][2])
            printf("Case #%d: true\n", ++i);
        else
            printf("Case #%d: false\n", ++i);

    return 0;
}
