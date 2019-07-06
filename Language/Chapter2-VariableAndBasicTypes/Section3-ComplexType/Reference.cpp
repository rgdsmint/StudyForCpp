// 严格来说，当我们使用术语“引用”时，指的其实是“左值引用”
#include <iostream>
using namespace std;

int main() {
    int num = 10; // 声明并初始化变量
    int &refNum = num; // refNum指向num(num的另一个名字)
    // int &ref;  // 会报错, 引用必须初始化
    refNum = 57; // 与num = 57一样(refNum和num是同一个对象,只是名字不同)
    
    int i1 = 10, i2 = 20;
    int &r1 = i1, r2 = i2; // r1是引用 r2是int变量
    int &r3 = i1, &r4 = i2; //r1和r2都是引用
    // 引用不是对象 所以不能定义引用的引用
    
}
