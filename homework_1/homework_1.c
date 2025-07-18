#include<stdio.h>
int main()
{
    int cm = 0;
    scanf("%d", &cm);

    int foot = cm / 30.48;

    int inch = ((cm / 30.48)-foot)*12;

    printf("%d ", foot);
    printf("%d", inch);

    return 0;
}
    //
// Created by XY on 25-7-18.
//
