#include <stdio.h>
#include <string.h>

int main() {
    int n, i, count = 0;
    char name[6], birth[11], maxBirth[11], minBirth[11], maxName[11],
        minName[11];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %s", name, birth);
        if (strcmp(birth, "1814/09/06") < 0 || strcmp(birth, "2014/09/06") > 0)
            continue;
        count++;
        if (count == 1) {
            strcpy(maxBirth, birth);
            strcpy(minBirth, birth);
            strcpy(maxName, name);
            strcpy(minName, name);
        } else if (strcmp(birth, maxBirth) < 0) {  //年龄越大，出生日期越小
            strcpy(maxBirth, birth);
            strcpy(maxName, name);
        } else if (strcmp(birth, minBirth) > 0) {  //年龄越小，出生日期越大
            strcpy(minBirth, birth);
            strcpy(minName, name);
        }
    }

    if (count)
        printf("%d %s %s\n", count, maxName, minName);
    else
        printf("0\n");

    return 0;
}
