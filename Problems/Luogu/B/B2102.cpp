#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int matrix[5][5] = {0};
	int m_c,m,count=0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> matrix[i][j];
		}
	}
	for(int i = 0; i < 5; i++){
		m_c =  max_element(matrix[i],matrix[i]+5) - matrix[i];
		m = matrix[0][m_c];
		for(int j = 1; j < 5; j++){
			m = min(matrix[j][m_c],m);
		}
		if(matrix[i][m_c] == m){
			cout << i+1 << " " << m_c+1 << " " << matrix[i][m_c] << endl;
			count++;
		}
	}
	if(!count)
		cout << "not found";
	return 0;
}
