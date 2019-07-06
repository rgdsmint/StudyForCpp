// int型整数的最大值和最小值是多少

#include <cstdio>

int main() {
    int a = 1;
    while (a > 0) {
        a *= 2;
    }
    printf("min = %d\n", a);
    printf("max = %d\n", a - 1);
}