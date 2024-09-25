#include <iostream>
using namespace std;

int main() {
	string a;
	cin >> a;
	int l = a.length(); 														
	if(a[l-1]=='y'&&a[l-2]=='l')
		a.erase(l-2,2);						
	else if(a[l-1]=='r'&&a[l-2]=='e')
		a.erase(l-2,2);
	else if(a[l-1]=='g'&&a[l-2]=='n'&&a[l-3]=='i')
		a.erase(l-3,3);	
	cout << a;	
	return 0;
}
