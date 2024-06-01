#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int arr[a] = {0};
	for(int i = 0; i < a; i++){
		cin >> arr[i];
	}
	int tar;
	cin >> tar;
	for(int i = 0; i < a; i++){
		if(arr[i] == tar){
			cout << i;
			return 0;
		}
			
	}
	cout << -1;
	return 0;
}
