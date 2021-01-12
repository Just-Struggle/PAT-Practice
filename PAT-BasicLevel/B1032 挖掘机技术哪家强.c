#include <stdio.h>

int school[100000] = {0};

int main() {
    int n, i, no, score;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &no, &score);
        school[no] += score;
    }

    for (i = 1, score = 0, no = 0; i <= n; i++)
        if (school[i] > score) {
            score = school[i];
            no = i;
        }

    printf("%d %d\n", no, score);

    return 0;
}
