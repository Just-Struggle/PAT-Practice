#include <stdio.h>
#include <stdlib.h>

typedef struct stu {
    int id;
    int de;
    int cai;
    int sum;
    int rate;
} stu;

int cmp(const void* a, const void* b) {
    stu* aa = (stu*)a;
    stu* bb = (stu*)b;
    if (aa->rate != bb->rate) return aa->rate - bb->rate;
    if (aa->sum != bb->sum) return bb->sum - aa->sum;
    if (aa->de != bb->de) return bb->de - aa->de;
    return aa->id - bb->id;
}

int main() {
    int n, l, h, i, j, m;
    stu* students;

    scanf("%d %d %d", &n, &l, &h);
    m = n;
    students = (stu*)malloc(sizeof(stu) * n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &students[i].id, &students[i].de, &students[i].cai);

        students[i].sum = students[i].de + students[i].cai;

        if (students[i].de >= h && students[i].cai >= h)
            students[i].rate = 1;
        else if (students[i].de >= h && students[i].cai < h &&
                 students[i].cai >= l)
            students[i].rate = 2;
        else if (students[i].de < l || students[i].cai < l) {
            m--;
            students[i].rate = 5;
        } else if (students[i].de >= students[i].cai)
            students[i].rate = 3;
        else
            students[i].rate = 4;
    }

    qsort(students, n, sizeof(stu), cmp);

    printf("%d\n", m);
    for (i = 0; i < m; i++)
        printf("%d %d %d\n", students[i].id, students[i].de, students[i].cai);

    free(students);

    return 0;
}
