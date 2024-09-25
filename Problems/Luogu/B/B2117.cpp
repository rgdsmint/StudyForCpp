#include <iostream>
using namespace std;

int main() {
	string a;
	int count;
	cin >> count;
	while(count--){
		cin >> a;
		if(a[0] >= 97 && a[0] <= 122){
			a[0] = (char)(a[0]-32);
		}
		cout << a[0];
		for(int i = 1; i < a.length(); i++){
			if(a[i] >= 65 && a[i] <= 90)
				a[i] = (char)(a[i]+32);
			cout << a[i];
		}
		cout <<	endl;
		
	}
	return 0;
}
