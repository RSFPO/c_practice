#include <stdio.h>
int main() {
    double w, f;
    scanf("%lf", &w);
    if (s <= 850) {
        t = 0;
    } else if (850 < s && s <= 1350) {
        t = 5*(s-800)/100;
    } else if (1350 < s && s <= 2850) {
        t = 10*(s-800)/100;
    } else if (2850 < s && s <= 5850) {
        t = 15*(s-800)/100;
    } else {
        t = 20*(s-800)/100;
    }
    printf("%.2lf\n", t);
    return 0;
}//
// Created by XY on 26-4-5.
//
