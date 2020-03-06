#include <cstdio>

int main() {
    int a;
    scanf("%d", &a);
    if (a <= 0) {
        printf("no answer");
    } else {
       int sum = 0;
       for (int i = 1; i <= a; i++) {
           sum += i;
       }
       printf("%d\n", sum);
    }
    return 0;
}
