#include <iostream>
using namespace std;

int main() {
	string str1,str2 = "";
	cin >> str1;
	for(int i = 0; i < str1.length(); i++) {
		if(str1[i] == 'T')
			str2 += "A";
		else if(str1[i] == 'A')
			str2 += "T";
		else if(str1[i] == 'C')
			str2 += "G";
		else 
			str2 += "C";
	}
	cout << str2;
	return 0;
}
