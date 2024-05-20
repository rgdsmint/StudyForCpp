#include<iostream>
using namespace std;
//a=b%c,则(a*b)%c=((a%c)*(b%c))%c


int main(){
	int a,b,c=1;
	cin>>a>>b;
	a%=1000;
	for(int i=1;i<=b;i++){
		c*=a;
		c%=1000;
	}
	printf("%03d",c);
	return 0;
}