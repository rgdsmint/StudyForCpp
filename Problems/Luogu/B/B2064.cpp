#include <iostream>
using namespace std;
int f(int n){
	if(n<=2)
		return 1;
	else
		return f(n-1)+f(n-2);
}
int main() {
	int a;
	cin >> a;
	int num[a] = {0};
	for(int i = 0; i<a;i++){
		cin >> num[i];
	}
	for(int i = 0; i<a;i++){
		cout << f(num[i]) << endl;
	}
	
	return 0;
}
