#include <stdio.h>
#include <string.h>

int main() {
    int count[128] = {0}, len1, len2, i, lack = 0;
    char s1[1001], s2[1001];

    gets(s1);
    gets(s2);

    len1 = strlen(s1);
    len2 = strlen(s2);
    for (i = 0; i < len1; i++) count[s1[i]]++;
    for (i = 0; i < len2; i++)
        if (count[s2[i]] > 0)
            count[s2[i]]--;
        else
            lack++;

    if (lack == 0)
        printf("Yes %d\n", len1 - len2);
    else
        printf("No %d\n", lack);

    return 0;
}
