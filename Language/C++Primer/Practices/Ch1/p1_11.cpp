#include <iostream>

int main() {
    int i,j;
    std::cin >> i >> j;
    if(i > j){
        while(i>=j){
            std::cout << i << " ";
            i--;
        }
    } else {
        while(i<=j){
            std::cout << i << " ";
            i++;
        }
    }
    return 0;
}