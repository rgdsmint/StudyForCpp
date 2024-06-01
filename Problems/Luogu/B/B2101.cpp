#include <iostream>
using namespace std;

int main() {
	int m,n,s=0,ans=0;
	cin >> m >> n;
	int matrix[m][n] = {0};
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> matrix[i][j];
			s += matrix[i][j];
		}
	}
	for(int i = 1; i < m-1; i++){
		for(int j = 1; j < n-1; j++){
			ans+=matrix[i][j];
		}
	}
	ans = s-ans;
	cout << ans;
	return 0;
}
