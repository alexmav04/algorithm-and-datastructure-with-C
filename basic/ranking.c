/*ranking*/

#include <stdio.h>
#include <stdlib.h>

#define Num 10

int main(void) {
    static int a[] = {56, 27, 88, 96, 45, 12, 32, 44, 47, 71};
    int rank[Num];
    int i, j;

    for (i = 0; i < Num; i++) {
        rank[i] = 1;
        for (j = 0; j < Num; j++) {
            if (a[j] > a[i]) {
                rank[i]++;
            }
        }
    }
    printf("  Score   Rank\n");
    for (i = 0; i < Num; i++) {
        printf("%6d%6d\n", a[i], rank[i]);
    }
}