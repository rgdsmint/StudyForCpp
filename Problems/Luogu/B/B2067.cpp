#include <iostream>
using namespace std;

int main() {
	int m,a,unt=0,p;
	cin >> m >> a;
	for(int i = 0; i<a;i++){
		cin >> p;
		if(p<=m)
			m-=p;
		else
			unt++;
	}
	cout << unt;
	
	return 0;
}