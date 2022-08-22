/* Fibonacci number */
// time _Complexity - O(2^n)
#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n==0 or n==1)
    return n;
    
    int a=fibo(n-1);
    int b=fibo(n-2);
    
    return a+b;
}

int main()
{
    cout<<"Enter a Number\n";
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;

    return 0;
}


