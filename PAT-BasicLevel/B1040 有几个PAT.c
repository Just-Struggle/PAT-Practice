#include <stdio.h>
#include <string.h>

int main() {
    long long result = 0, pn = 0, tn = 0;
    int i, len;
    char s[100001];

    gets(s);

    len = strlen(s);
    for (i = 0; i < len; i++)
        if (s[i] == 'T') tn++;
    for (i = 0; i < len; i++) {
        switch (s[i]) {
            case 'P':
                pn++;
                break;
            case 'A':
                result += pn * tn;
                break;
            case 'T':
                tn--;
                break;
        }
    }

    printf("%lld\n", result % 1000000007);

    return 0;
}
