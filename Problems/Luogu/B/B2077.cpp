#include <iostream>
using namespace std;

int main() {
	long long a;
	cin >> a;
	while(a!=1){
		if(a%2!=0){
			printf("%lld*3+1=%lld\n",a,a*3+1);
			a = a*3+1;
		} else {
			printf("%lld/2=%lld\n",a,a/2);
			a = a/2;
		}
	}
	cout << "End";
	return 0;
}
