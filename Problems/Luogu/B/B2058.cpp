#include <iostream>
using namespace std;

int main() {
	int a,total=0, t=0;
	cin >> a;
	int b[a] = {0};
	int c[a] = {0};
	int d[a] = {0};
	for(int i = 0; i<a; i++){
		cin >> b[i] >> c[i] >> d[i];
	}
	for(int i = 0; i<a; i++){
		t+=b[i];
	}
	total+=t;
	cout << t << " ";
	t=0;
	for(int i = 0; i<a; i++){
		t+=c[i];
	}
	cout << t << " ";
	total+=t;
	t=0;
	for(int i = 0; i<a; i++){
		t+=d[i];
	}
	cout << t << " ";
	total+=t;
	cout << total;
	return 0;
}
