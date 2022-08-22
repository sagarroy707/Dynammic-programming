/* decreasing increasing number */
// time _Complexity - O(n)
#include <iostream>
using namespace std;
void print_dec_inc(int n)
{
    if(n==0)
    return ;
    
    cout<<n<<" ";
    print_dec_inc(n-1);
    cout<<n<<" ";
}
int main()
{
    cout<<"Enter a number\n";
    int n;
    cin>>n;
    print_dec_inc(n);

    return 0;
}

