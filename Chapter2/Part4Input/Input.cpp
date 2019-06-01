#include <iostream>
using namespace std;

int main() {
    //cin    
    //cin以换行制表符空格为终止
    //cin.getline()读取整行 不保留换行符
    //cin.get()读取整行 保留换行符
    string name;
    cout << "请输入名字:";
    cin >> name;
    cout << "很高兴认识你, "<< name << endl;
    return 0;	
}
