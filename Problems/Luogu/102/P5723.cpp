#include <iostream>
using namespace std;


int IsPrime(int n)
{
    int i,m;
    if(n<2)
        return 0;
    else
    {
        m=n/2;
        for(i=2;i<=m;i++)
        {
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}

int getSum(int *arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    
    int f, n, index = 0; 
    cin >> n;
    int primes[191] = {0};
    int sums[191] = {0};
    for(int i = 1; i<=1153; i++){
        if(IsPrime(i)) {
            primes[index] = i;
            index++;
        }
    }
    for(int i = 0; i < index; i++) {
        sums[i] = getSum(primes,i+1);
    }
    for(int i = 0; i < index; i++) {
        if(sums[i] > n) {
            f = i;
            break;
        } 
   }
   for(int i = 0; i < f; i++) {
        cout << primes[i] << endl;
    }
   cout << f;
    
    return 0;
}
