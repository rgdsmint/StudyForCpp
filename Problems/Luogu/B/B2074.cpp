#include<iostream>
using namespace std;
//a=b%c,则(a*b)%c=((a%c)*(b%c))%c


int main(){
	int a,b,c=1;
	cin>>a>>b;
	a%=7;
	for(int i=1;i<=b;i++){
		c*=a;
		c%=7;
	}
	if(c==0)
		cout<<"Sunday";
	if(c==1)
		cout<<"Monday";
	if(c==2)
		cout<<"Tuesday";
	if(c==3)
		cout<<"Wednesday";
	if(c==4)
		cout<<"Thursday";
	if(c==5)
		cout<<"Friday";
	if(c==6)
		cout<<"Saturday";
	return 0;
}
