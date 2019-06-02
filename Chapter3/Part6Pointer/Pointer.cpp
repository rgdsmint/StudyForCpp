#include <iostream>
using namespace std;


int main() {
    string name = "xiaoming";
    int age = 10;
    cout << "age is " << age << endl;
    int* address = &age;
    cout << "and age's address is " << address << endl;
    return 0;
}
