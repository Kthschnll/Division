#include <stdio.h>
#include <math.h>

int teile (int i, int j, int *e, int *r);
int main() {
int dd, ds, *zd, *zs;
    printf("Gib einen Dividenten ein:\n");
    scanf ("%d", &dd);
    printf("Gib einen Divisor ein:\n");
    scanf("%d", &ds);
    zd = &dd;
    zs = &ds;
    int quo;
    quo = teile(dd, ds, zd, zs);

    printf("Der Quotient ist : %d \n",quo);
    return 0;
}

int teile (int i, int j, int *zd, int *r) {
int quo;
int re ;
if (j == 0){return 0; }

quo = i / j;

zd = &quo;

return 1;
}