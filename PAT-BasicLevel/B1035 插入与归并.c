#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int main() {
    int n, i, j, flag, temp;
    int origin[100], now[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &origin[i]);
    for (i = 0; i < n; i++) scanf("%d", &now[i]);

    for (i = 1; i < n; i++)
        if (now[i - 1] > now[i]) break;
    for (j = i; j < n; j++)
        if (now[j] != origin[j]) break;
    if (j == n) {
        printf("Insertion Sort\n");

        temp = now[i];
        for (j = i - 1; j >= 0; j--) {
            if (now[j] > temp)
                now[j + 1] = now[j];
            else
                break;
        }
        now[j + 1] = temp;

        for (j = 0; j < n; j++) {
            if (j != n - 1)
                printf("%d ", now[j]);
            else
                printf("%d\n", now[j]);
        }
    } else {
        printf("Merge Sort\n");

        for (i = 2; i / 2 <= n; i *= 2) {
            flag = 1;
            for (j = 0; j < n; j++)
                if (now[j] != origin[j]) {
                    flag = 0;
                    break;
                }

            for (j = 0; j < n; j += i)
                qsort(origin + j, (j + i) <= n ? i : (n - j), sizeof(int), cmp);

            if (flag)
                for (j = 0; j < n; j++) {
                    if (j != n - 1)
                        printf("%d ", origin[j]);
                    else
                        printf("%d\n", origin[j]);
                }
        }
    }

    return 0;
}
