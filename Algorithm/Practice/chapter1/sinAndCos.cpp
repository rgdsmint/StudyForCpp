#include <cmath>
#include <cstdio>

int main() {
    double angle;
    scanf("%lf", &angle);
    const double PI = acos(-1);
    double radian = angle * PI / 180.0; 
    double sinNum = sin(radian);
    double cosNum = cos(radian);
    printf("sin%.2f = %.2f\tcos%.2f = %.2f\n", angle, sinNum, angle, cosNum);
}
