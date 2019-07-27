// 例题2-3
#include <cstdio>
int main() {
    double sum = 0;
    for (int i = 0; ; i++) {
        double term = 1.0 / (i * 2 + 1);
        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term;
        }
        if (term < 1e-6) { // 1e-6  1x10-6 1乘10的负六次
            break;
        }
    }
    printf("%.6f\n", sum);
    return 0;
} 