#include <iostream>
using namespace std;

int main() {
	// Use function str1.Find(str2) directly
	// eg: if(str1.find(str2) != string::nops){ then }
	string a,b;
	cin >> a >> b;
	int count = 0;
	for(int i = 0; i < b.length(); i++) {
		count = 0;
		for(int j = 0; j < a.length(); j++){
			if(b[i+j] == a[j])
				count++;
		}
		if(count == a.length()){
			cout << a << " is substring of " << b;
			return 0;
		}
			
	}
	for(int i = 0; i < a.length(); i++) {
		count = 0;
		for(int j = 0; j < b.length(); j++){
			if(a[i+j] == b[j])
				count++;
		}
		if(count == b.length()){
			cout << b << " is substring of " << a;
			return 0;
		}
			
	}
	cout << "No substring";
	return 0;
}