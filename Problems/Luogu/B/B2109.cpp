#include <iostream>
using namespace std;

int main() {
	char a;
	int count = 0;
	while(cin >> a){
		if(isdigit(a))
			count++;
	}
	cout << count;
	return 0;
}
