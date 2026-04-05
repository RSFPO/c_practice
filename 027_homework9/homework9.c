#include <stdio.h>
int main() {
    double l, j;
    scanf("%lf", &l);
    if (l <= 100000) {
        j = l * 0.1;
    } else if (l <= 200000) {
        j = (l - 100000) * 0.075 + 10000;
    } else if (l <= 400000) {
        j = (l - 200000) * 0.05 + 17500;
    } else if (l <= 600000) {
        j = (l - 400000) * 0.03 + 27500;
    } else if (l <= 1000000) {
        j = (l - 600000) * 0.015 + 33500;
    } else {
        j = (l - 1000000) * 0.01 + 39500;
    }
    printf("%.2lf\n", j);
    return 0;
}//
// Created by XY on 26-4-3.
//
