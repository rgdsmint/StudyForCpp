#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for(int i = 1; i<= 1000000; i++){
		for(int j = i; j <= 1000000; j++) {
			if((1+j)*j/2-3*i == a){
				cout << i << " " << j;
				return 0;
			}
				
		}
		
	}
	
	return 0;
}
