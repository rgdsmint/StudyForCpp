#include <iostream>
using namespace std;

int main() {
	long long a,b,ans=0;
	cin >> a >> b;
	while(a>10){
		if(a%10==3)
			ans+=1;
		a/=10;
	}
	if(a==3)
		ans+=1;
	if(ans==b)
		cout << "YES";
	else 
		cout << "NO";

	return 0;
}
