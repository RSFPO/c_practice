#include <stdio.h>
#include <math.h>
int main() {
    int a;
    scanf("%d",&a);
    int x,y,z,t;
    z=a/100;
    y=a/10%10;
    x=a%10;
    t=x*100+y*10+z;
    printf("%d\n",t);
    return 0;
}
//
// Created by XY on 26-3-25.
//
