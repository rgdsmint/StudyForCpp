#include <iostream>
using namespace std;

int main() {
	int a,b,c, t = 0;
	cin >> a >> b >> c;
	if(a<60) 
		t++;
    if(b<60) 
		t++;
    if(c<60) 
		t++;
    if(t==1) 
		cout<< 1 <<endl;
    else 
		cout<< 0 <<endl;
	return 0;
}
