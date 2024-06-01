#include <iostream>
using namespace std;

int main() {
	int matrix[5][5] = {0};
	int temp[5] = {0};
	int r1,r2;
	for(int i = 0; i <5; i++){
		for(int j = 0; j <5; j++){
			cin >> matrix[i][j];
		}
	}
	cin >> r1 >> r2;
	for(int i = 0; i <5; i++){
		temp[i] = matrix[r1-1][i];
		matrix[r1-1][i] = matrix[r2-1][i];
		matrix[r2-1][i] = temp[i];
	}
	for(int i = 0; i <5; i++){
		for(int j = 0; j <5; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
