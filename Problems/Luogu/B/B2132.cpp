#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num){
	if(num == 1)
		return false;
	if(num == 2)
		return true;
	for(int i = 2; i <= (int)pow(num,0.5) + 1; i++){
		if(num%i == 0)
			return false;
	}
	return true;
}

int main() {
	int a,count = 0;
	cin >> a;
	for(int i = 3; i <= a; i++){
		if(isPrime(i - 2)&&isPrime(i)){
			count++;
			cout << i - 2 << " " << i << endl;
		}
			
	}
	if(!count)
		cout << "empty";
	return 0;
}
