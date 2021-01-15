#include <stdio.h>

int main() {
    int n, i, k, temp, grade[101] = {0};

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &temp);
        grade[temp]++;
    }
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &temp);
        printf("%d", grade[temp]);
        i == k - 1 ? printf("\n") : printf(" ");
    }

    return 0;
}
