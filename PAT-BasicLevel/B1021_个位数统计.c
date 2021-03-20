#include <stdio.h>
#include <string.h>

int main() {
    int count[10] = {0};
    int i, len, temp;
    char n[1001];

    scanf("%s", n);

    len = strlen(n);
    for (i = 0; i < len; i++) count[n[i] - '0']++;

    for (i = 0; i < 10; i++) {
        temp = count[i];
        if (temp) printf("%d:%d\n", i, temp);
    }

    return 0;
}
