#include <iostream>
using namespace std;

int main() {
	int a,c;
	char b;
	cin >> a >> b;
	if(b=='y'){
		if(a<=1000)
			c = 13;
		else if(a%500==0)
			c = (a-1000)/500*4+13;
		else
			c = ((a-1000)/500+1)*4+13;
	} else {
		if(a<=1000)
			c = 8;
		else if(a%500==0)
			c = (a-1000)/500*4+8;
		else
			c = ((a-1000)/500+1)*4+8;
	}
	cout << c;
	return 0;
}
