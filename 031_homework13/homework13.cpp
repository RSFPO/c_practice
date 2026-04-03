#include <stdio.h>
#include <math.h>
int main() {
    double km,t,y;
    scanf("%lf%lf",&km,&t);
    if (0<km<=3) {
        y=10+t/5*2;
    }
    else if (3<km<=10) {
        y=10+(km-3)*2+t/5*2;
    }
    else  {
        y=24+(km-10)*3+t/5*2;
    }
    printf("%.0lf\n",y);
    return 0;
}//
// Created by XY on 26-4-3.
//
