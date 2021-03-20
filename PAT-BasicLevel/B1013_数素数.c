#include <stdbool.h>
#include <stdio.h>

bool isPrime(int a) {
    int i;
    // 1,2,3 fall through
    for (i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}

int main() {
    int m, n, count, i;
    i = 2;

    scanf("%d %d", &m, &n);
    for (count = 1; count <= n; count++) {
        while (!isPrime(i++))
            ;
        if (count >= m) {
            printf("%d", i - 1);
            if ((count - m + 1) % 10 == 0)
                putchar('\n');
            else if (count < n)
                putchar(' ');
            else
                putchar('\n');
        }
    }

    return 0;
}
