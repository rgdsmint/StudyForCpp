#include <iostream>
using namespace std;

int main() {
	int a,count=0,n;
	cin >> a;
	for(int i = 0; i<a;i++){
		cin >> n;
		if(n%10-n/1000-(n/100)%10-(n/10)%10>0)
			count++;
	}
	cout << count;
	
	return 0;
}