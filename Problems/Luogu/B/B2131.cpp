#include <iostream>
#include <vector>
using namespace std;



int main() {
	string s;
	int a, flag, count = 0;
	double temp;
	cin >> a;
	while(a--){
		cin >> s;
		cin >> temp >> flag;
		if(temp >= 37.5&&flag){
			cout << s << endl;
			count++;
		}
	}
	cout << count;
	return 0;
}