#include <iostream>
#include <stdio.h>

#define SUM(a,b,c,d) (a+b+c+d)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int T1, T2, T3, T4;
    int S1, S2, S3, S4;
    scanf("%d %d %d %d", &T1, &T2, &T3, &T4);
    scanf("%d %d %d %d", &S1, &S2, &S3, &S4);
    int T = SUM(T1, T2, T3, T4);
    int S = SUM(S1, S2, S3, S4);

    printf("%d\n",MAX(T,S));

    return 0;
}
