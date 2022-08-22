/* power function */
// time _Complexity - O(n)
#include <iostream>
using namespace std;
int power(int x,int n)
{
    if(n==0)
    return 1;
    
    return x*power(x,n-1);
}
int main()
{
    cout<<"Enter two numbers\n";
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;

    return 0;
}

