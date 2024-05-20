#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a;
	cin >> a;
	double sum = 0,b,c,d;
	for(int i = 0; i<a;i++){
		cin >> b >> c >> d;
		sum+=sqrt(b*b+c*c)/25+d*1.5;
	}
	cout << (int)ceil(sum);
	
	return 0;
}