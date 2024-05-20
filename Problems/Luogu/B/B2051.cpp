#include <iostream>
using namespace std;

int main(){
	int a, b; 
	cin >> a >> b;
	if(a<=1&&a>=-1&&b>=-1&&b<=1)
		cout<<"yes";
	else
		cout << "no";
	return 0;
}