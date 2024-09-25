#include <iostream>
#include <cmath>
using namespace std;

int sumOfFactor(int num){
	int sum = 0;
	for(int i = 2; i <= num/2 + 1; i++){
		if(num%i == 0)
			sum += i;
	}
	return sum+1;
}

int main() {
	int a;
	cin >> a;
	for(int i = 2; i <= a; i++){
		if(sumOfFactor(i) == i)
			cout << i << endl;
	}
	return 0;
}
