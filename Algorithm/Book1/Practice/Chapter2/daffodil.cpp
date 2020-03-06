#include <cstdio>

int main() {
    for(int i = 100; i<= 999; i++){
        int a = (i - (i%100))/100;
        int b = ((i - (i%10))/10)%10;
        int c = i%10;
        if (((a*a*a) + (b*b*b) + (c*c*c)) == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}
