#include <iostream>
using namespace std;



int main() {
	string a;
	char tmp = ' ';
	int count = 1;
	cin >> a;
	for(int i = 0; i < a.size(); i++) {
		tmp = a[i];
		while(tmp == a[i+1]){
			i++;
			count++;
		}
		cout << to_string(count) << tmp;
		count = 1;
	}

	
	
	return 0;
}