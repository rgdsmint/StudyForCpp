#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	char a;
	int count[26] = {0};
	int flag = 0;
	char ch[26] = {0};
	while(cin >> a){
		if(find(ch,ch+26,a)==ch+26){
			ch[flag] = a;
			count[flag]++;
			flag++;
		} else {
			count[find(ch,ch+26,a)-ch]++;
		}
	}
	for(int i = 0; i < 26; i++){
		if(count[i] == 1){
			cout << ch[i];
			return 0;
		}
	}
	cout << "no";
	return 0;
}
