/* tiling problems */
// time _Complexity - O(2^n)
#include <iostream>
using namespace std;
int  tiles(int n)
{
    if(n<0)
    return 0;
    
    if(n==0 or n==1)
    return 1;
    
    int a=tiles(n-4);
    int b=tiles(n-1);
    
    return a+b;
    
}
int main()
{
    cout<<"Enter a number\n";
    int n;
    cin>>n;
    cout<<tiles(n);

    return 0;
}

