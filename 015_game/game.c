#include<stdio.h>
int main() {
    int fixedVaule = 10;
    int userInput;

    printf("请输入一个整数 ");
    scanf("%d", &userInput);

    if (userInput > fixedVaule){
        printf("win");
    } else if (userInput < fixedVaule) {
        printf("lose");
    }
    return 0;
}
    //
// Created by XY on 25-7-22.
//
