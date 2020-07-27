/*score histogram*/

#include <stdio.h>
#include <stdlib.h>

#define Num 20

int main(void) {
    static int a[] = {35, 78, 99, 22, 47, 92, 56, 78, 34, 47, 28, 0, 42, 50};
    int i, rank, histo[11];

    for (i = 0; i <= 10; i++) {
        histo[i] = 0;
    }
    for (i = 0; i < Num; i++) {
        rank = a[i] / 10;
        if (0 <= rank && rank <= 10) {
            histo[rank]++;
        }
    }
    for (i = 0; i <= 10; i++) {
        printf("%3d - : %3d\n", i * 10, histo[i]);
    }
}