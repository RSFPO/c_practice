#include <stdio.h>
int main()
{
    int price=0;

    printf("请输入金额（元) ：");
    fflush(stdout);
    scanf("%d", &price);

    int change =100-price;

    printf("找您%d元。\n" , change);
    return 0;
}//
// Created by XY on 25-7-10.
//
