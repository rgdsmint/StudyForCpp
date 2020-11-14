#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int count;
    double score, sum;
    while (cin >> count) {
        double scoreList[count];
        sum = 0;
        for (int i = 1; i <= count; i++) {
            cin >> score;
            scoreList[i-1] = score;
        }
        sort(scoreList, scoreList + count);
        for (int pos = 1; pos < count - 1; pos++) {
            sum += scoreList[pos];
        }
        cout << fixed << setprecision(2)
            << sum/(count - 2) << endl;
    }
    return 0;
}