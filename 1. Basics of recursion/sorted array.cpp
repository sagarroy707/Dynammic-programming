/* sorted array */
// time _Complexity - O(n)
#include <iostream>
using namespace std;

bool is_sorted(int* arr,int n)
{
    if(n-1==0)
    return true;
    
    if(arr[0]>arr[1])
    return false;
    
    bool a=is_sorted(arr+1,n-1);
    return a;
    
}
int main()
{
    int arr[5]={1,2,3,5,4};
    cout<<is_sorted(arr,5)<<endl;

    return 0;
}

