#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if(a%3==0)
		printf("3 ");
	if(a%5==0)
		printf("5 ");
	if(a%7==0)
		printf("7");
	if(a%3!=0&&a%5!=0&&a%7!=0)
		printf("n");
	return 0;
}
