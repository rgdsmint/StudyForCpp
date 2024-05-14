
#include <iostream>
using namespace std;
void bubbleSort(int A[], int n);
int main() {
    int A[8] = {2, 4,1,3,7,0,5,10};
    for (int i = 0; i < 8; i++){
        cout << A[i] << endl;
    }
    bubbleSort(A, 8);
    for (int i = 0; i < 8; i++){
        cout << A[i] << endl;
    }
    return 0;
}
void bubbleSort(int A[], int n){
    for(bool sorted = false; sorted = !sorted; n--) {
        for (int i = 1; i < n; i++) {
            if(A[i-1] > A[i]) {
                swap(A[i - 1], A[i]);
                sorted = false;
            }
        }
    }
}