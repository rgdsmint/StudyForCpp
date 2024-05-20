#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	double cases[a] = {0};
	double cure[a] = {0};
	for(int i = 0; i<a;i++){
		cin>>cases[i];
		cin>>cure[i];
	}
	double p1 = cure[0]/cases[0],p2;
	for(int i = 1; i<a;i++){
		p2 = cure[i]/cases[i];
		if(p2-p1>=0.05)
			cout << "better" << endl;
		else if(p2-p1<=-0.05)
			cout << "worse" << endl;
		else
			cout << "same" << endl;
	}

	return 0;
}
