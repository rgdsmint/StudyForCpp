#include <iostream>
#include <cmath>
using namespace std;
int ave(int a, int b, int c, int d, int e){
	int aver = (int)round(((double)a+(double)b+(double)c+(double)d+(double)e)/5.0);
	return aver;
}
int main() {
	int a,b;
	cin >> a >> b;
	int m[a][b];
	int ans[a][b];

	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			cin >> m[i][j];
		}
	}
	if(a<3||b<3){
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
	} else {
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				ans[i][j] =  m[i][j];
			}
		}
		for(int i = 1; i < a-1; i++){
			for(int j = 1; j < b-1; j++){
				ans[i][j] =  ave(m[i-1][j],m[i+1][j],m[i][j-1],m[i][j+1],m[i][j]);
			}
		}
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}
	}
	

	return 0;
}