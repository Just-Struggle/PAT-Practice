#include <stdio.h>

long long gcd(long long a, long long b);
void print(long long a, long long b);

int main() {
    long long a, b, c, d;

    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);

    print(a, b);
    printf(" + ");
    print(c, d);
    printf(" = ");
    print(a * d + b * c, b * d);
    printf("\n");

    print(a, b);
    printf(" - ");
    print(c, d);
    printf(" = ");
    print(a * d - b * c, b * d);
    printf("\n");

    print(a, b);
    printf(" * ");
    print(c, d);
    printf(" = ");
    print(a * c, b * d);
    printf("\n");

    print(a, b);
    printf(" / ");
    print(c, d);
    printf(" = ");
    print(a * d, b * c);
    printf("\n");

    return 0;
}

long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }

void print(long long a, long long b) {
    int sig = 1;
    long long g, k;

    if (!a) {
        printf("0");
        return;
    } else if (!b) {
        printf("Inf");
        return;
    }

    if (a < 0) {
        a = -a;
        sig = -sig;
    }
    if (b < 0) {
        b = -b;
        sig = -sig;
    }

    k = a / b;
    a -= b * k;
    g = gcd(a, b);
    a /= g;
    b /= g;

    if (sig == -1) printf("(-");
    if (k) {
        printf("%lld", k);
        if (a) printf(" ");
    }
    if (a) printf("%lld/%lld", a, b);
    if (sig == -1) printf(")");
}
