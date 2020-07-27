/*Horner method*/

#include <stdio.h>

double fn(double, double *, int);

int main(void) {
    static double a[] = {1, 2, 3, 4, 5};//coefficient
    double x;
    for (x = 1; x <= 5; x++) {
        printf("fn(%f)=%f\n", x, fn(x, a, 4));
    }
}
double fn (double x, double a[], int n) {
    double p;
    int i;
    p = a[n];

    for (i = n-1; i >= 0; i--) {
        p = p * x + a[i];
    }
    return p;
}