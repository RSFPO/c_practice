#include <stdio.h>
int main() {
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c,&t);
    t=c;
    c=b;
    b=a;
    a=t;
    printf("%d,%d,%d",a,b,c);
    return 0;
}//
// Created by XY on 26-3-25.
//
