#include <iostream>
using namespace std;

int main() {
	double price[10] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	double cost = 0;
	double count;
	for(int i = 0; i < 10; i++){
		cin >> count;
		cost += count*price[i];
	}
	printf("%.1lf",cost);
	return 0;
}
