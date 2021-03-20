#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100001], s2[100001];
    char c;
    bool bad[128] = {false};
    int i, j, len;

    gets(s1);
    gets(s2);

    len = strlen(s1);
    for (i = 0; i < len; i++) {
        c = s1[i];
        bad[c] = true;
        if (c == '+')
            for (j = 'A'; j <= 'Z'; j++) bad[j] = true;
        else if (c >= 'A' && c <= 'Z')
            bad[c - 'A' + 'a'] = true;
    }

    len = strlen(s2);
    for (i = 0; i < len; i++) {
        c = s2[i];
        if (!bad[(int)c]) putchar(c);
    }

    putchar('\n');

    return 0;
}
