#include <iostream>
#include <string>
using namespace std;

int main() {
	double a,slen=0;
	double sameChar = 0;
	string str1,str2;
	cin >> a;
	cin >> str1 >> str2;
	slen = str1.length();
	for(int i = 0; i < slen; i++){
		if(str1[i] == str2[i])
			sameChar++;
	}
	if(sameChar/slen >= a)
		cout << "yes";
	else
		cout << "no";
	return 0;
}
