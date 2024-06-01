#include <iostream>
#include "algorithm"
using namespace std;

int main() {
	int a;
	cin >> a;
	int arr[a];
	for(int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	sort(arr,arr+a);
	int fre[arr[a-1]+1] = {0};
	for(int i = 0; i < a; i++) {
		fre[arr[i]]++;
	}
	for(int i = 0; i <= arr[a-1]; i++) {
		cout << fre[i] << endl;
	}
	return 0;
}
