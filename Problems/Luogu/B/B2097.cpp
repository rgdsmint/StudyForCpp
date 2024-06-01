#include <iostream>
using namespace std;

int main() {
	int a,len_t = 1,len = 1;
	cin >> a;
	int arr[a];
	for(int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	for(int i = 0; i < a-1; i++) {
		if(arr[i] == arr[i+1])
			len_t++;
		else {
			if(len_t > len){
				len = len_t;
				len_t = 1;
			}
		}	
	}
	cout << len;
	return 0;
}
