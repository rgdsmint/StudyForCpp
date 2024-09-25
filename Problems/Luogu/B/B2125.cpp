#include <iostream>
#include <vector>
using namespace std;



int main() {
	string s,name;
	int a, idx = 0,t;
	cin >> a;
	while(a--){
		cin >> t;
		cin >> s;
		if(t > idx){
			name = s;
			idx = t;
		}
	}
	cout << name;
	return 0;
}