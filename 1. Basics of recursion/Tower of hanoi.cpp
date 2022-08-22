/* Tower of hanoi */
// time _Complexity - O(2^n)
/* the total number of steps to put all the rings from A to B is 2^n-1 */
#include <iostream>
using namespace std;
void tower_of_hanoi(int n,char from,char helper,char to)
{
    if(n==0)
    return ;
    
    tower_of_hanoi(n-1,from,to,helper);
    cout<<from<<"->"<<to<<endl;
    tower_of_hanoi(n-1,helper,from,to);
}
int main()
{
    cout<<"Enter a Number\n";
    int n;
    cin>>n;
    tower_of_hanoi(n,'A','B','C');  // A- from, B-helper, C- to

    return 0;
}

