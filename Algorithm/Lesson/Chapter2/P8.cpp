// 阶乘之和2
#include <cstdio>
#include <ctime>
int main() {
    const int MOD = 1000000;
    int n, S = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial = (factorial * j % MOD);
        }
        S = (S + factorial) % MOD;
    }
    printf("%d\n", S);
    printf("Time used = %.2fs\n", (double)clock() / CLOCKS_PER_SEC);
    //(double)clock() / CLOCKS_PER_SEC 程序运行时间 需导入ctime头文件
    return 0;
}