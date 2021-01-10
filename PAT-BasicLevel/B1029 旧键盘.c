#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    char s1[81], s2[81];
    char c;
    bool bad[96] = {false};
    int i, j, len1, len2;

    scanf("%s%s", s1, s2);

    len1 = strlen(s1);
    for (i = 0, j = 0; i < len1; i++) {
        if (s1[i] != s2[j]) {
            c = s1[i];
            if (c >= 'a' && c <= 'z') c = c - 'a' + 'A';
            if (!bad[c]) {
                bad[c] = true;
                putchar(c);
            }
        } else
            j++;
    }

    putchar('\n');

    return 0;
}
