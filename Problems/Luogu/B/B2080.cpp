#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x,ans = 1;
	int n;
	cin >> x >> n;
	for (int i = 1;i <= n; i++){
		ans += pow (x,i);
	}
	printf ("%.2f",ans);
	return 0;
}