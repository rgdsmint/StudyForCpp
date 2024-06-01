#include <iostream>
using namespace std;

int main() {
	long long a,ans=0,b;
	cin >> a >> b;;
	for(int i = a; i<=b; i++){
		if(i%10==2)
			ans+=1;
		if(i/10%10==2)
			ans+=1;
		if(i/100%10==2)
			ans+=1;
		if(i/1000%10==2)
			ans+=1;
		
	}
	cout << ans;
	return 0;
}
