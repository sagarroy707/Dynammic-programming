/* binary string */
// time _Complexity - O(2^n)
#include iostream
using namespace std;

int binary_str(int n)
{
    if(n==0)
    return 1;
    
    if(n==1)
    return 2;
    
    int a=binary_str(n-1);
    int b=binary_str(n-2);
    return a+b;
}
int main()
{
    coutEnter a numbern;
    int n;
    cinn;
    coutbinary_str(n)endl;

    return 0;
}

