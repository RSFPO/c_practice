#include <stdio.h>
int main() {
    int r=3,w=3,b=6;
    int count=0;
    for (r=0;r<=3;r++) {
    for (w=0;w<=3;w++) {
    for (b=0;b<=6;b++) {
        if (r+w+b==8) {
           count++;
        }
    }
    }
    }
    printf("%d\n", count);
    return 0;
}//
// Created by XY on 26-4-19.
//
