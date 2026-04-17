#include <stdio.h>

int main() {
    int s[8], i;
    int count = 0;

    for (i = 0; i < 8; i++) {
        scanf("%d", &s[i]);
        if (s[i] >= 90) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}//
// Created by XY on 26-4-17.
//
