#include <stdio.h>

int main() {
    int count[10];
    int i, j, temp;
    char min[51];

    for (i = 0; i < 10; i++) scanf("%d", &count[i]);

    j = 0;
    for (i = 1; i < 10; i++)
        if (count[i]) {
            count[i]--;
            min[j++] = i + '0';
            break;
        }

    for (i = 0; i < 10; i++) {
        temp = count[i];
        while (temp--) min[j++] = i + '0';
    }
    min[j] = '\0';

    printf("%s\n", min);

    return 0;
}