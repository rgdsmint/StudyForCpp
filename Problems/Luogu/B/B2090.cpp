#include <iostream>
using namespace std;

int main() {
	double a,age;
	cin >> a;
	double b = 0;
	double c = 0;
	double d = 0;
	double e = 0;
	for(int i = 0; i<a; i++){
		cin >> age;
		if(age<=18)
			b++;
		else if(age>18&&age<=35)
			c++;
		else if(age>35&&age<=60)
			d++;
		else
			e++;
	}
	printf("%.2lf\%\n%.2lf\%\n%.2lf\%\n%.2lf\%",b/a*100,c/a*100,d/a*100,e/a*100);

	return 0;
}
