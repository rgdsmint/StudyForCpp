#include <iostream>
using namespace std;

int main() {
	int a,m,s,c;
	cin >> a;
	if(!a){
		cout << 0;
		return 0;
	}
	int arr[a] = {0};
	cin >> m;
	arr[0] = m;
	s = 0; 
	c = 1;
	for(int i = 1; i < a; i++){
		cin >> arr[i];
		if(arr[i] > m){
			m = arr[i];
			c = 1;
		} else if(arr[i] == m)
			c++;
		
	}
	for(int i = 0; i < a; i++){
		s+=arr[i];
	}
	cout << s-m*c;
	return 0;
}
