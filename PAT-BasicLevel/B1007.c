#include <stdio.h>

int main() {
    int n, pre, i, j, count, flag;
    count = 0;

    scanf("%d", &n);

    pre = 1;
    for (i = 2; i <= n; i++) {
        flag = 1;
        for (j = 2; j * j <= i; j++)  //用 i/2 做终止条件会超时
            if (i % j == 0) {
                flag = 0;
                break;
            }

        if (flag) {
            if (i - pre == 2) count++;
            pre = i;
        }
    }

    printf("%d\n", count);

    return 0;
}
