#include <stdio.h>

int main() {
    int weight;
    char type;
    int price = 8;

    scanf("%d %c", &weight, &type);

    if (weight > 1000) {
        int extra = weight - 1000;

        if (extra <= 500) {
            price = price + 4;
        }
        else if (extra <= 1000) {
            price = price + 8;
        }
        else {
            int count = (extra - 1) / 500 + 1;
            price = price + count * 4;
        }
    }

    if (type == 'y') {
        price = price + 5;
    }

    printf("%d", price);

    return 0;
}
//
// Created by XY on 26-4-5.
//
