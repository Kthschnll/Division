#include <stdio.h>
#include <math.h>
int dd, ds, *zd, *zs;

int teile ();
int main() {

    printf("Gib einen Dividenten ein:\n");
    scanf ("%d", &dd);
    printf("Gib einen Divisor ein:\n");
    scanf("%d", &ds);
    zd = &dd;
    zs = &ds;

    teile(zd, zs);

    printf("Der Quotient aus %d / %d ist: %d Rest %d\n",dd, ds, *zd, *zs);
    return 0;
}

int teile () {

int quo, i, j, r;
j = *zs;
i = *zd;
if (j == 0){return 0; }
else {
    quo = i / j;
    r = i%j;
    zd = &quo;
    zs = &r;
}
return 1;
}