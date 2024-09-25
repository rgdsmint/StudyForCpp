#include <iostream>
using namespace std;

int main() {
	int a,b;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(!(s[i] >= 48 && s[i] <= 57)) {
			a = atoi(s.substr(0,i).c_str());
			b = atoi(s.substr(i+1,s.size() - i).c_str());
			if(s[i] == '+')
				cout << a+b;
			if(s[i] == '-')
				cout << a-b;
			if(s[i] == '*')
				cout << a*b;
			if(s[i] == '/')
				cout << a/b;
			if(s[i] == '%')
				cout << a%b;
		}
	}

	return 0;
}
