#include <stdbool.h>
#include <string.h>
#include <stdio.h>

int main() {
    int k, i, j, temp;
    bool marks[10000];
    bool flag = false;
    int n[101] = {0};

    memset(marks, false, sizeof(marks));
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &temp);
        n[i] = temp;
        while (temp != 1) {
            if (temp % 2)
                temp = temp + (temp + 1 >> 1);
            else
                temp = temp >> 1;
            if (marks[temp]) break;
            marks[temp] = true;
        }
    }

    for (i = 0; i < k; i++) {
        flag = false;
        for (j = k - 1; j > 0; j--) {
            if (n[j] > n[j - 1]) {
                temp = n[j];
                n[j] = n[j - 1];
                n[j - 1] = temp;
                flag = true;
            }
        }
        if (!flag) break;
    }

    flag=false;
    for (i = 0; i < k; i++) {
        if(!marks[n[i]]){
            if(flag)
                printf(" ");
            printf("%d",n[i]);
            flag=true;
        }
    }
    printf("\n");

    return 0;
}