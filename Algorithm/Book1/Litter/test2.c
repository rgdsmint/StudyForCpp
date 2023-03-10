#include <stdio.h>


void display(int number) {
    int a,b,c,d,e,f,g,h;         // 个十百千万十万百万千万位
    a = number%10;
    b = number/10;
    c = number/100;
    d = number/1000;
    e = number/10000;
    f = number/100000;
    g = number/1000000;
    h = number/10000000;
    int displayTable[8] = {h,g,f,e,d,c,b,a};
}
int main() {
    while (1) {
        display(12345678);
    }
}