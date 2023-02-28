#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a,b,c,d;
    a = b = c = d = 0;
    if(n%2==0&&4<n&&n<=12)
        a= 1;
    if(n%2==0||4<n&&n<=12)
        b = 1;
    if(((n%2==0)&&(n<=4||n>12))||(n%2!=0&&4<n&&n<=12))    
        c = 1;
    if(n&2!=0&&(n<=4||n>12)) 
        d = 1;
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}