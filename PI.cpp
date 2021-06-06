#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int getLength(long long x);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long flag;
    clock_t begin, end;
    while (true) {
        begin = clock();
        srand((unsigned int)(time(NULL)));
        flag = 0;
        cout << "the number of point: ";
        double count;
        cin >> count;
        int length = getLength(count);
        for (long long i = 1; i <= count; i++) {
            double x = rand() / double(RAND_MAX);
            double y = rand() / double(RAND_MAX);
            if (sqrt((pow(x, 2) + pow(y,2)))<=1) {
                flag++;
            }
        }
        double PI = 4 * flag / count;
        end = clock();
        cout << fixed << setprecision(length - 1) << "the value of PI is approximately equal to " <<PI << endl;
        cout << "It takes " << (double)(end - begin) / CLOCKS_PER_SEC << "s" << endl;
    }
    
    return 0;
}

int getLength(long long x) {
	int length = 0;
	while (x) {
		x /= 10;
		length++;
	}
	return length;
}
