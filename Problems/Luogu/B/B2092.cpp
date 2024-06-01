#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int l[a] = {0};
	for(int i = 2; i <= a; i++){
		for(int j = i; j <= a; j++){
			if(j%i==0)
				l[j-1] = !l[j-1];
		}
	}
	for(int j = 0; j < a; j++){
		if(!l[j])
			cout << j+1 << " ";
	}
	return 0;
}
