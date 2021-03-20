#include <stdio.h>

int main() {
    int n, i, j, temp, max;
    int record[2][3] = {0}, gesture[2], winGesture[2][3] = {0};
    char c, itoc[] = {'B', 'C', 'J'};

    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%c", &c);
            getchar();
            switch (c) {
                case 'B':
                    gesture[j] = 0;
                    break;
                case 'C':
                    gesture[j] = 1;
                    break;
                case 'J':
                    gesture[j] = 2;
                    break;
            }
        }

        temp = gesture[0] - gesture[1];
        if (temp == -1 || temp == 2) {  //甲胜乙负
            record[0][0]++;
            record[1][2]++;
            winGesture[0][gesture[0]]++;
        } else if (temp == 0) {  //平局
            record[0][1]++;
            record[1][1]++;
        } else {  //乙胜甲负
            record[0][2]++;
            record[1][0]++;
            winGesture[1][gesture[1]]++;
        }
    }

    for (i = 0; i < 2; i++)
        printf("%d %d %d\n", record[i][0], record[i][1], record[i][2]);

    for (i = 0; i < 2; i++) {
        max = 0;
        for (j = 1; j < 3; j++)
            if (winGesture[i][max] < winGesture[i][j]) max = j;

        printf("%c%c", itoc[max], i ? '\n' : ' ');
    }

    return 0;
}
