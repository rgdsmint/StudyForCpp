#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    string hometown;
};

int main() {
    Person a = {
        "Mike",
        11,
        "America"
    };
    Person b = {
        "小明",
        11,
        "中国"
    };
    return 0;

}
