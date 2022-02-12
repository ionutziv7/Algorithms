#include <iostream>
using namespace std;

int reverse(int x)
{
    int ret = 0;
    while(x) 
    {
        ret = ret * 10 + x % 10;
        x /= 10;
    }
    return ret;
}

int main()
{
   int i, j, k ,count = 0;
   cin>>i>>j>>k;
   for(int a = i; a<=j;a++) 
   {
       int diff = abs(a - reverse(a));
       if(diff % k == 0)
       {
           count++;
       }
    }
    cout<<count<<endl;
	return 0;
}
