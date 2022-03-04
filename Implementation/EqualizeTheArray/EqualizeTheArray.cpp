#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int res = 0, count = 0;
    for(int i=0;i<n;i++)
    {
        count = 0;
        for(int j = 0;j<n;j++)
        {
            if(A[j] == A[i])
                count++;
        }
        if(count > res)
            res = count;
    }
    
    cout<<n - res;
	return 0;
}
