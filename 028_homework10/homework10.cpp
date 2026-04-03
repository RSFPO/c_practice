#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,t,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
         t=b*b-4*a*c;
    if (t>=0) {
        x1=(-b+sqrt(t))/(2*a);
        x2=(-b-sqrt(t))/(2*a);
        printf("%.2lf,%.2lf\n",x1,x2);
    }
    else {
        printf("无实根");
    }
    return 0;
}//
// Created by XY on 26-4-3.
//
