#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> q(k);
    for(int i = 0; i != n; ++i)
    {
        int x;
        cin >> x;
        q[x % k] += 1;
    }
    int rv = min(1, q[0]);
    for(int i = 1; 2 * i <= k; ++i)
    {
        int j = (k - i ) % k;
        if(i == j) 
        {
            rv += min(1, q[i]);
        }
        else
        {
            rv += max(q[i], q[j]);
        }
    }
    
    cout << rv <<"\n";
	return 0;
}
