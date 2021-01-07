#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    int i, count;
    int length[4];
    char str[4][61];
    char date[][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

    for (i = 0; i < 4; i++) {
        gets(str[i]);
        length[i] = strlen(str[i]);
    }

    count = 0;
    for (i = 0; i < length[0]; i++) {
        if (count == 0 && str[0][i] == str[1][i] && str[0][i] >= 'A' &&
            str[0][i] <= 'G') {
            printf("%s ", date[str[0][i] - 'A']);
            count++;
        } else if (count == 1 && str[0][i] == str[1][i]) {
            if (isdigit(str[0][i])) {
                printf("0%c:", str[0][i]);
                break;
            } else if (str[0][i] >= 'A' && str[0][i] <= 'N') {
                printf("%02d:", str[0][i] - 'A' + 10);
                break;
            }
        }
    }

    for (i = 0; i < length[2] && i < length[3]; i++) {
        if (str[2][i] == str[3][i] && isalpha(str[2][i])) {
            printf("%02d\n", i);
            break;
        }
    }

    return 0;
}
