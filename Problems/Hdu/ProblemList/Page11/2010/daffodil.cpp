#include <iostream>
using namespace std;

int main() {
    int begin, end, count;
    while(cin >> begin >> end) {
        count = 0;
        for(int i = begin; i<= end; i++){
            int a = (i - (i%100))/100;
            int b = ((i - (i%10))/10)%10;
            int c = i%10;
            if (((a*a*a) + (b*b*b) + (c*c*c)) == i) {
                if(count > 0) {
                    cout << " ";
                }
                cout << i;
                count++;
            } 
        }
        if(count == 0) {
            cout << "no" << endl;
        } else {
            cout << endl;
        }     
    } 
    return 0;
}
