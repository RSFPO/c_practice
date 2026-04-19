#include <stdio.h>
int main() {
    int s=1,t=1,n=0;
    while(s<=10000000) {
        t=t*2;
        s+=t;
        n++;
    }
    printf("%d\n", n);
    return 0;
}//
// Created by XY on 26-4-19.
//
