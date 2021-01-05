#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    char name[11], maxName[11], minName[11];
    char id[11], maxId[11], minId[11];
    int score, maxScore, minScore;
    maxScore = minScore = 0;

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        scanf("%s%s%d", name, id, &score);
        getchar();

        if (maxScore == 0 && minScore == 0) {
            maxScore = minScore = score;
            strcpy(maxName, name);
            strcpy(minName, name);
            strcpy(maxId, id);
            strcpy(minId, id);
        }

        if (score > maxScore) {
            maxScore = score;
            strcpy(maxName, name);
            strcpy(maxId, id);
        } else if (score < minScore) {
            minScore = score;
            strcpy(minName, name);
            strcpy(minId, id);
        }
    }

    printf("%s %s\n", maxName, maxId);
    printf("%s %s\n", minName, minId);

    return 0;
}
