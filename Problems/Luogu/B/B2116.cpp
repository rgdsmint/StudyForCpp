#include <iostream>
using namespace std;

int main() {
	string a,tmp;
	cin >> a;
	
	for(int i = 0; i < a.length(); i++){
		if(a[i] >= 65 && a[i] <= 90){
			a[i] = (char)(a[i]+32);
		} else {
			a[i] = (char)(a[i]-32);
		}
	}
	tmp = a;
	for(int i = 0; i < a.length(); i++){
		a[i] = tmp[a.length() - 1 - i];
	}

	for(int i = 0; i < a.length(); i++){
		if((a[i] >= 65 && a[i] <= 87) || (a[i] >= 97 && a[i] <= 119)){
			a[i] = (char)(a[i]+3);
		} else {
			a[i] = (char)(a[i]-23);
		}
		cout << a[i];
	}

	return 0;
}
