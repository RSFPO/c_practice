#include <stdio.h>
#include <math.h>
int main() {
    double r,h;
    double V;
    scanf("%lf%lf", &r, &h);
    V = 3.14*r*r*h;
    printf("圆柱体的体积是：%.2lf\n",V);
    return 0;
}
