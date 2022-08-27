/* finding subsets */
// time _Complexity - O(2^n)

#include <iostream>
#include<string>
using namespace std;
void subsets(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<" ";
        return ;
    }
    
    subsets(input.substr(1),output+input[0]);
    subsets(input.substr(1),output);
}
int main()
{
    cout<<"Enter a string\n";
    string str;
    cin>>str;
    subsets(str," ");

    return 0;
}
