#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int m = 5;
    int total;
    for(int i = 0;i<n; ++i)
    {
        m = m/2;
        total += m;
        m *= 3;
    }
    
    cout<<total<<endl;
	return 0;
}