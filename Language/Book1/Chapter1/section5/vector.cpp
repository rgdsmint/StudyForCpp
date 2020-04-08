#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 容器vector:
    int seqSize = 18;
    vector<int> vPellSeq(seqSize);
    vPellSeq[0] = 1;
    vPellSeq[1] = 2;
    for (int index = 2; index < seqSize; ++index) {
        vPellSeq[index] = vPellSeq[index - 2] + vPellSeq[index - 1] * 2;
    } 
    for (int i = 0; i < seqSize; i++) {
        cout << vPellSeq[i] << "\t";
    }
    // 数组array:
    const int SEQ_SIZE = 18;
    int aPellSeq[SEQ_SIZE];
    aPellSeq[0] = 1;
    aPellSeq[1] = 2;
    for (int index = 2; index < seqSize; ++index) {
        aPellSeq[index] = aPellSeq[index - 2] + aPellSeq[index - 1] * 2;
    } 
    for (int i = 0; i < seqSize; i++) {
        cout << aPellSeq[i] << "\t";
    }


    

    return 0;
}