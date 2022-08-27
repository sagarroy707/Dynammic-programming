/* N-queen count */
// time _Complexity - O(n^2)
#include<iostream>
using namespace std;

bool isPossible(int** arr,int n,int row,int col)
{
    // check for same column
    for(int i=row-1;i>=0;i--)
    {
        if(arr[i][col]==1)
        return false;
    }
    
    // check for left diagonal
    for(int i=row-1,j=col-1;i>=0 and j>=0;i--,j--)
    {
        if(arr[i][j]==1)
        return false;
    }
    
    // check for right diagonal
    for(int i=row-1,j=col+1;i>=0 and j<n;i--,j++)
    {
        if(arr[i][j]==1)
        return false;
    }
    
    return true;
}
int Nqueen(int** arr,int n,int row)
{
    if(row==n)
    {
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     cout<<arr[i][j]<<" ";
        //     cout<<endl;
        // }
        // cout<<endl;
        return 1;
    }
    int ways=0;
    for(int j=0;j<n;j++)
    {
        
      if(isPossible(arr,n,row,j))
        {
            arr[row][j] = 1;
            int a=Nqueen(arr,n,row+1);
            ways+=a;
            arr[row][j] = 0;
        }
    }
    return ways;
}
int main()
{
    cout<<"Enter the size of an array\n";
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        arr[i][j]=0;
    }
    cout<<Nqueen(arr,n,0);
    
}
