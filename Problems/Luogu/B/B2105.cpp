#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int m1[a][b];
	int m2[b][c];
	int m3[a][c] = {0};
	memset(m3,0,sizeof(m3));
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			cin >> m1[i][j];
		}
	}
	for(int i = 0; i < b; i++){
		for(int j = 0; j < c; j++){
			cin >> m2[i][j];
		}
	}
	for(int i = 0; i < a; i++){
		for(int j = 0; j < c; j++){
			for(int k = 0; k < b; k++){
				m3[i][j] += m1[i][k]*m2[k][j];
			}
			
		}
	}
	for(int i = 0; i < a; i++){
		for(int j = 0; j < c; j++){
			cout << m3[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}