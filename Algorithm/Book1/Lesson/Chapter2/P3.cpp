#include <cstdio>
int main() {
    for (int i = 0 ; ; i++) {
        int n = i * i;
        if (n < 1000) {
            continue;
        }
        if (n > 9999) {
            break;
        }
        int h = n / 100; // 取百位千位数字
        int l = n % 100; // 取十位个位数字
        if (h / 10 == h % 10 && l / 10 == l % 10) {
            printf("%d\n", n);
        }
    }
    return 0;
}