#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	string str1,str2 = "";
	getline(cin,str1);
	for(int i = 0; i < str1.length(); i++) {
		if((str1[i] >= int('B') && str1[i] <= int('Z'))||(str1[i] >= int('b') && str1[i] <= int('z')))
			str2 += str1[i] - 1;
		else if(str1[i] == 'A')
			str2 += "Z";
		else if(str1[i] == 'a')
			str2 += "z";
		else
			str2 += str1[i];
	}
	cout << str2;
	return 0;
}