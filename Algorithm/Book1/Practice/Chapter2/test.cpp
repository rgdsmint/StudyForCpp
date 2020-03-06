#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;
int main() {
    ifstream in("data.in");
    ofstream out("data.out");
    int a = 0;
    int count = 1;
    while(in >> a){
        cout << a << endl;
        out << "case"<< count<< ": "<< a<<endl;
        count++;
    }
    in.close();
    out.close();

    return 0;
}
