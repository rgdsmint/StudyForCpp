#include <cstdio>

int main() {
    long long n = 0;
    scanf("%lld", &n);
    int count = 0;
    while (n > 1) {
        if (n % 2 == 1) {
            n = n * 3 + 1;
        } else {
            n /= 2;
        }
        count++;
    }
    printf("%d\n", count);
    return 0;
}