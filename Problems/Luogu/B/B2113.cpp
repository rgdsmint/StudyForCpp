#include <iostream>
using namespace std;

int main() {
	string str1,str2 = "";
	cin >> str1;
	for(int i = 0; i < str1.length()-1; i++) {
		str2 += char(int(str1[i])+int(str1[i+1]));
	}
	str2 += char(int(str1[str1.length()-1])+int(str1[0]));
	cout << str2;
	return 0;
}
