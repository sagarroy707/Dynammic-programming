/* friends pairing problem */
// time _Complexity - O(2^n)
#include <iostream>
using namespace std;
int pairing(int n)
{
    if(n==0 or n==1 or n==2)
    return n;
   
    return pairing(n-1)+(n-1)*pairing(n-2);
}
int main()
{
    cout<<"Enter a number\n";
    int n;
    cin>>n;
    cout<<pairing(n)<<endl;

    return 0;
}
