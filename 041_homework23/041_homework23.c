#include <stdio.h>
int main() {
    int n,i;
    int u=1;
    double d=1.0;
    double s=1.0;
    scanf("%d",&n);
    for(i=2;i<=n;i++) {
        u=u+i;
        d=d*i;
       s=s+u/d;
    }
    printf("%lf\n", s);
    return 0;
}//
// Created by XY on 26-4-19.
//
