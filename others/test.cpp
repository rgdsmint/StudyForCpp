#include <cstdio>
#include <iostream>


int main() {
    std::string s = "abcd";
    std::string s2 = s.substr(0,s.size());
    std::cout << s2;
}