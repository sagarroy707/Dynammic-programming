//Counting Bits
// time _Complexity - O(n)
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> v(n+1);
        v[0]=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
                v[i]=v[i/2];
            else
                v[i]=v[i/2]+1;
        }
        
        return v;
    }
};
