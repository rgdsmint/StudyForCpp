#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num){
	for(int i = 2; i <= (int)pow(num,0.5) + 1; i++){
		if(num%i == 0)
			return true;
	}
	return false;
}

int main() {
	int a,count = 1;
	cin >> a;
	for(int i = 3; i <= a; i++){
		if(!isPrime(i))
			count++;
	}
	cout << count;
	return 0;
}
