// 阶乘之和1
#include <cstdio>

int main() {
    int n, S = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        S += factorial;
    }
    printf("%d\n", S % 1000000);
    return 0;
}