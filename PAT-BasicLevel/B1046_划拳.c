#include <stdio.h>

int main() {
    int n, cnt1 = 0, cnt2 = 0, a1, a2, b1, b2, sum;

    scanf("%d", &n);

    while (n--) {
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        sum = a1 + b1;
        if (a2 == sum && b2 != sum)
            ++cnt2;
        else if (b2 == sum && a2 != sum)
            ++cnt1;
    }

    printf("%d %d\n", cnt1, cnt2);

    return 0;
}
