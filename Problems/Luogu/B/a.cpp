#include <fstream>
#include <iostream>
using namespace std;
 
int main() {
    for(int i = 2015; i <= 3969; i++) {
        string fName = "B" + to_string(i) + ".cpp";
        ofstream outfile(fName);  // 创建新文件
        if (outfile.is_open()) {          // 检查是否成功打开
            outfile << "#include <iostream>\n"
                    << "using namespace std;\n\n"
                    << "int main() {\n"
                    << "\tint a;\n"
                    << "\tcin >> a;\n\n"       
                    << "\treturn 0;\n"
                    << "}"<< endl;  // 向文件中写入数据
            outfile.close();                // 关闭文件流
            cout << "File created successfully." << endl;
        } else {
            cout << "Failed to create file." << endl;
        }
    }
    return 0;
}