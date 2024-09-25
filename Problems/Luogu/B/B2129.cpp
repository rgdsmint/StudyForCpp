#include <iostream>
#include <cmath>
using namespace std;

double triMax(double a, double b, double c){
	return max(a, max(b, c));
}

int main() {
	double a,b,c,m = 0;
	cin >> a >> b >> c;
	m = triMax(a,b,c)/triMax(a+b,b,c)/triMax(a,b,b+c);
	printf("%.3lf", m);
	return 0;
}