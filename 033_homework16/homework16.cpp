#include <stdio.h>
int main() {
    double a, b, y;
    if (scanf("%lf+%lf", &a,&b)) {
        y = a+b;
    } else if (scanf("%lf-%lf", &a,&b)) {
        y = a-b;
    } else if (scanf("%lf*%lf", &a,&b)) {
        y = a*b;
    } else if (scanf("%lf/%lf", &a,&b)) {
        y = a/b;
    }
    printf("%lf\n", y);
    return 0;
}//
// Created by XY on 26-4-5.
//
