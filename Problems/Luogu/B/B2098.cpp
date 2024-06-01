#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a;
	cin >> a;
	int arr[a];
	int ans[a] = {0}, flag = 0;
	for(int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	for(int i = 0; i < a; i++) {
		if(find(ans,ans+a,arr[i])==ans+a){
			ans[flag] = arr[i];
			flag++;
		}
	}
	for(int i = 0; i < flag; i++) {
		if(ans[i])
			cout << ans[i] << " ";
	}
	return 0;
}
