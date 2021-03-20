#include <stdio.h>
#include <stdlib.h>

int arr[100000];

int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int main() {
    int n, i, j, count;
    long long p;

    scanf("%d %lld", &n, &p);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), cmp);

    for (i = 0, j = 0, count = 0; i < n; i++) {
        while (j < n && arr[i] * p >= arr[j]) j++;
        if (count < j - i) count = j - i;
    }

    printf("%d\n", count);

    return 0;
}
