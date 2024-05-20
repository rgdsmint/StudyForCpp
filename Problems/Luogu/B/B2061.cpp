#include <iostream>
using namespace std;

int main() {
	int a,one,five,ten;
	one = five = ten = 0;
	cin >> a;
	int num[a] = {0};
	for(int i = 0; i<a;i++){
		cin >> num[i];
	}
	for(int i = 0; i<a;i++){
		if(num[i]==1)
			one++;
		if(num[i]==5)
			five++;
		if(num[i]==10)
			ten++;
	}
	cout << one << endl << five << endl << ten;
	return 0;
}
