#include <iostream>
using namespace std;

int main() {
	long long a;
	cin >> a;
	int s[a] = {0};
	for(int i = 1; i<=a; i++){
		if(i%7!=0&&i%10!=7&&(i/10)%10!=7)
			s[i-1] = i;
		
	}
	int sum = 0;
	for(int i = 0; i<a; i++){
		sum += s[i]*s[i];
		
	}
	
	cout << sum;

	return 0;
}
