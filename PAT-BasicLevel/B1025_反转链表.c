#include <stdio.h>
#include <stdlib.h>

struct nd {
    int data;
    int next;
} node[100000];

int main() {
    int head, n, k;
    int i, j, temp, p, count;
    int* l;

    scanf("%d %d %d", &head, &n, &k);
    l = (int*)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
        scanf("%d", &temp);
        scanf("%d %d", &node[temp].data, &node[temp].next);
    }

    for (count = 0, p = head; p != -1; p = node[p].next) l[count++] = p;

    for (i = 0; i + k - 1 < count; i += k) {
        for (j = i; j < i + k / 2; j++) {
            temp = l[j];
            l[j] = l[2 * i + k - 1 - j];
            l[2 * i + k - 1 - j] = temp;
        }
    }

    for (i = 0; i < count; i++) {
        p = l[i];
        if (i != count - 1) {
            node[p].next = l[i + 1];
            printf("%05d %d %05d\n", p, node[p].data, node[p].next);
        } else {
            node[p].next = -1;
            printf("%05d %d %d\n", p, node[p].data, node[p].next);
        }
    }

    free(l);

    return 0;
}