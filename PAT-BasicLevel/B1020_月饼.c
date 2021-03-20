#include <stdio.h>
#include <stdlib.h>

typedef struct yuebing {
    double stoke;
    double revenue;
    double price;
} yuebing;

int cmp(const void* a, const void* b) {
    yuebing* aa = (yuebing*)a;
    yuebing* bb = (yuebing*)b;
    return bb->price > aa->price;
}

int main() {
    int n, d, i;
    double total = 0;
    yuebing* yb;

    scanf("%d %d", &n, &d);
    yb = (yuebing*)malloc(sizeof(yuebing) * n);
    for (i = 0; i < n; i++) scanf("%lf", &yb[i].stoke);
    for (i = 0; i < n; i++) {
        scanf("%lf", &yb[i].revenue);
        yb[i].price = yb[i].revenue / yb[i].stoke;
    }

    qsort(yb, n, sizeof(yuebing), cmp);

    for (i = 0; d != 0 && i < n; i++) {
        if (yb[i].stoke <= d) {
            total += yb[i].revenue;
            d -= yb[i].stoke;
        } else {
            total = total + yb[i].price * d;
            d = 0;
        }
    }

    printf("%.2f\n", total);
    free(yb);

    return 0;
}
