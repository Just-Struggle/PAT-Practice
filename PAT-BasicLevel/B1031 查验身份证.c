#include <stdio.h>

int main() {
    int n, i, j, temp, checksum, flag, allpass;
    int weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char str[19];
    char m[] = "10X98765432";

    scanf("%d", &n);
    for (i = 0, allpass = 1; i < n; i++) {
        scanf("%s", str);

        for (j = 0, flag = 1, checksum = 0; j < 17; j++) {
            temp = str[j] - '0';
            if (temp < 0 || temp > 9) {
                flag = 0;
                break;
            }
            checksum += weight[j] * temp;
        }

        if (!flag || m[checksum % 11] != str[17]) {
            allpass = 0;
            printf("%s\n", str);
        }
    }

    if (allpass) {
        printf("All passed\n");
    }

    return 0;
}
