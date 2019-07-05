#include <cstdio>

int main() {
    int count;
    scanf("%d", count);
    double total = 95.0 * count;
    if (total >= 300) {
        total *= 0.85;
        printf("%.3f", total);
    } else {
        printf("%.1f", total);
    }
}