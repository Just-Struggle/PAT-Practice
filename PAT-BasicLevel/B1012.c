#include <stdio.h>

int main() {
    int n, i, temp;
    int a[5] = {0};
    int count[5] = {0};
    int coef = 1;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &temp);

        switch (temp % 5) {
            case 0:
                if (temp % 2 == 0) {
                    count[0]++;
                    a[0] += temp;
                }
                break;
            case 1:
                count[1]++;
                if (coef == 1)
                    a[1] += temp;
                else
                    a[1] -= temp;
                coef = -coef;
                break;
            case 2:
                count[2]++;
                break;
            case 3:
                count[3]++;
                a[3] += temp;
                break;
            case 4:
                count[4]++;
                if (temp > a[4]) a[4] = temp;
                break;
        }
    }
    a[2] = count[2];

    for (i = 0; i < 5; i++) {
        if (count[i] == 0)
            printf("N");
        else {
            if (i == 3)
                printf("%.1f", (double)a[3] / count[3]);
            else
                printf("%d", a[i]);
        }
        if (i < 4)
            putchar(' ');
        else
            putchar('\n');
    }

    return 0;
}
