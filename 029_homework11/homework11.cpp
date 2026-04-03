#include <stdio.h>
#include <math.h>
int main() {
    double x,y;
    scanf("%lf",&x);
    if (x==0 || x==2) {
        y=0;
    }
    else if (x>0 && x!=2) {
        y=(x+1)/(x-2);
    }
    else {
        y=(x-1)/(x-2);
    }
    printf("%lf\n",y);
    return 0;
}//
// Created by XY on 26-4-3.
//
