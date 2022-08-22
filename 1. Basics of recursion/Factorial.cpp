/*factorial of a number */
// time _Complexity- O(n);
#include <iostream>
using namespace std;
int fact(int n)
{
    // base case
    if(n==0 or n==1)
    return 1;
    
    //recursive call and small calculation
    return n*fact(n-1);
}
int main()
{
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    cout<<"factorial of a "<<n<<" is "<<fact(n)<<endl;

    return 0;
}



