#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void extraLongFactorials(int n) 
{
    int ones = 0, carry = 0, nul  =0;
    vector<int> v(1);
    v[0] = 1;   //as 0! = 1
    for(int i=2; i<=n; i++)
    {
        for(int j=0;j<v.size(); j++)
        {
            nul = (v[j] *i) + carry;
            ones = nul % 10;
            carry = nul / 10;
            v[j] = ones;
            if(carry != 0 )
            {
                v.push_back(0);
            }
        }
    }
    //now just reverse the vector!!
    reverse(v.begin(), v.end());
    //now removing starting zeroes!!
    int i=0;
    for(; i<v.size();i++)
    {
        if(v[i] == 0)
        {
            continue;
        }
        else
        {
            break; //from here we get starting digit index!!
        }
    }
    for(; i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    extraLongFactorials(n);
	return 0;
}
