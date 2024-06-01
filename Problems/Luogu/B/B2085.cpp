#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int b;
	cin >> b;
	int a[30000];
	int index = 1, is_p = 1;
	a[0] = 2;
	for(int i = 3; i <= 1000000; i++){
		if(index == 30000) {
			break;
		}
		for(int j = 2; j <= pow(1.0*i,0.5)+1; j++) {
			if(i%j==0){
				is_p = 0;
				break;
			}
		}
		if(is_p){
			a[index] = i;
			index++;
		}
		is_p = 1;
			
	}
	cout << a[b-1];
	return 0;
}
