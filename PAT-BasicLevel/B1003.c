#include <stdio.h>
#include <string.h>

int main(void) {
    int n, i, j;
    int count[3] = {0};
    int p, t, flag, length;
    char str[10][100];

    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) {
        gets(str[i]);
    }

    for (i = 0; i < n; i++) {
        flag = 1;
        length = strlen(str[i]);
        memset(count, 0, sizeof(count));

        for (j = 0; j < length && flag; j++) {
            switch (str[i][j]) {
                case 'P':
                    count[0]++;
                    p = j;
                    break;
                case 'A':
                    count[1]++;
                    break;
                case 'T':
                    count[2]++;
                    t = j;
                    break;
                default:
                    flag = 0;
                    break;
            }
        }
        if (flag && count[0] == 1 && count[1] >= 1 && count[2] == 1 &&
            (length - t - 1) == (p * (t - p - 1)))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
