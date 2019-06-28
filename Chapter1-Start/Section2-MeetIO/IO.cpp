#include <iostream>
/*
    包含输入流(istream), 输出流(ostream)
    istream: cin
    ostream: cout(标准输出), cerr(输出错误信息), clog(输出程序运行时的一般信息)
 */
using namespace std; 
/*
    引用名为"std"的命名空间, 包含cin, cout等
    不引用则为std::cin  std::cout依此类推
*/
int main() {
    cout << "请输入两个数: " << endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << v1 << "与" << v2 << "的和为" << v1 + v2 << endl; 
    return 0;
}
