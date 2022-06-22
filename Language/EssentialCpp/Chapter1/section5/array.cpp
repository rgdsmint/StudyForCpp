#include <iostream>
#include <vector>
using namespace std;

int main() {
    int aElemSeq[] = {
        1, 2, 3,
        3, 4, 7,
        2, 5, 12,
        3, 6, 10,
        4, 9 ,16,
        5, 12, 22
    };
    vector<int> vElemSeq(aElemSeq, aElemSeq + 18);
    for (int i = 0; i < 18; i++) {
        cout << vElemSeq[i] << "\t";
    }
    cout << endl;
    cout << vElemSeq.size() << endl;
    return 0;
}