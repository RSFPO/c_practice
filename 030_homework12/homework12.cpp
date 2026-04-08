#include <stdio.h>

int main() {
    float sales, salary;

    if (scanf("%f", &sales) != 1) {
        printf("输入无效。\n");
        return 1;
    }

    switch (1) {
        case 1:
            if (sales < 3000) salary = 4000;
            else if (sales < 7000) salary = 4000 + sales * 0.10;
            else if (sales < 10000) salary = 4000 + sales * 0.15;
            else salary = 4000 + sales * 0.20;
            break;
    }

    printf("工资为：%.2f元\n", salary);
    return 0;
}

// Created by XY on 26-4-3.
//
