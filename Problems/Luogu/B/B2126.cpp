#include <iostream>
#include <vector>
using namespace std;



int main() {
	string s;
	char tmp = ' ';
	int k, count = 1;
	cin >> k >> s;
	for(int i = 0; i < s.size(); i++){
		tmp = s[i];
		while(tmp == s[i+1]){
			i++;
			count++;
		}
		if(count >= k) {
			cout << tmp;
			return 0;
		}
		count = 1;
	}
	cout << "No";
	return 0;
}