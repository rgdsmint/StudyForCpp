#include <iostream>

int main() {
    int sum = 0;
    int i = 10;
    while(i){
        sum+=i;
        i--;
    }
    std::cout << sum << std::endl;
    return 0;
}