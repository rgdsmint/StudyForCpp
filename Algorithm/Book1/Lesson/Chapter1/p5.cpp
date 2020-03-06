// 圆柱体的表面积
#include <cstdio>
#include <cmath>

int main() {
    const double PI = acos(-1.0); // 圆周率 常量加const 名称大写
    double r, h;
    scanf("%lf%lf", &r, &h); // %lf double型浮点数
    double s1 = PI * r * r; // 底面积
    double s2 = 2 * PI * r * h; // 侧面积
    double s = s1 * 2.0 + s2; // 总面积
    printf("Area = %.3f\n", s);
    return 0;
}