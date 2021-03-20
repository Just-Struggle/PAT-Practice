#include <stdio.h>

int main() {
    int n, m, nums[100];
    int i;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) scanf("%d", &nums[i]);

    m = m % n;  //必要

    for (i = 0; i < n; i++) {
        printf("%d", nums[(n - m + i) % n]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
