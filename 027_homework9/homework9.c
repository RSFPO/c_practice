#include <stdio.h>
int main() {
    double l,j;
    scanf("%lf",&l);
    if (l<=100000)
    j=l*0.1;
    else if (l<=2000000)
    j=(l-100000)*0.075+10000;
    else if (l<=4000000)
    j=17500+(l-2000000)*0.05;
    else if (l<=6000000)
    j=27500+(l-4000000)*0.03;
    else if (l<=10000000)
    j=33500+(l-6000000)*0.015;
    else if (l>1000000)
    j=39500+(l-1000000)*0.01;
    printf("%.2lf\n",j);
    return 0;
}//
// Created by XY on 26-4-3.
//
