/* power function fast */
// time _Complexity - O(logn)
#include <iostream>
using namespace std;
int power(int x,int n)
{
    if(n==0)
    return 1;
    
    if(n%2==0)
    return power(x,n/2)*power(x,n/2);
    else
    return power(x,n/2)*power(x,n/2)*x;
    
}
int main()
{
    cout<<"Enter two numbers\n";
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;

    return 0;
}

