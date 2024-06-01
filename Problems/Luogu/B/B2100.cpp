#include <iostream>
using namespace std;

int main() {
	int a,i,j;
	cin >> a;
	int matrix[a][a] = {0};
	cin >> i >> j;
	for(int k = 0; k < a; k++){
		printf("(%d,%d) ",i,k+1);
	}
	cout << endl;
	for(int k = 0; k < a; k++){
		printf("(%d,%d) ",k+1,j);
	}
	cout << endl;
	for(int k = 1; k <= a; k++){
		for(int l = 1; l <= a; l++){
			if(k-i==l-j)
				printf("(%d,%d) ",k,l);
		}
	}
	cout << endl;
	for(int k = a; k >= 1; k--){
		for(int l = 1; l <= a; l++){
			if(k+l==i+j)
				printf("(%d,%d) ",k,l);
		}
	}
	return 0;
}
