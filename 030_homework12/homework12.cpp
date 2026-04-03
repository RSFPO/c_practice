#include <stdio.h>
int main() {
    int x,g;
    scanf("%lf",&x);
    switch (x) {
        case 1:x<=3000,g=4000;break;
        case 2:x>=3000 && x<=7000,g=x*0.1+4000;break;
        case 3:x>=7000 && x<=10000,g=x*0.15+4000;break;
        case 4:x>=10000,g=x*0.2+4000;break;
    }
    printf("%d\n",g);
    return 0;
}//
// Created by XY on 26-4-3.
//
