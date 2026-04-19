#include <stdio.h>

int main() {
    int i;
    for (i=1; i<=1500; i++) {
        if (i%3==2 && i%5==3 && i%7==2 && i%11==3) {
            printf("尚存将士的人数为：%d\n", i);
        }
    }
    return 0;
}//
// Created by XY on 26-4-17.
//
