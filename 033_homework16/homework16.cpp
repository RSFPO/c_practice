#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%c%d", &a, &c, &b);

    if (c == '+') {
        printf("%d", a + b);
    } else if (c == '-') {
        printf("%d", a - b);
    } else if (c == '*') {
        printf("%d", a * b);
    } else if (c == '/') {
        if (b != 0) {
            printf("%d", a / b);
        } else {
            printf("除数不能为0");
        }
    }

    return 0;
}

//
// Created by XY on 26-4-5.
//
