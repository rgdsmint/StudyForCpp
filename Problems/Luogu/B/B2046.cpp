#include <iostream>
using namespace std;

int main() {
	double time1,time2, a;
	cin >> a;
	
	time1 = 23+27+a/3;
	time2 = a/1.2;
	if(time1 > time2)
		cout << "Walk";
	else if(time2 > time1)
		cout << "Bike";
	else
		cout << "All";
	return 0;
}
