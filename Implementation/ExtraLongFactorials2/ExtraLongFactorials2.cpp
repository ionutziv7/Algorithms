#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void fact(int);
int multiply(int, int[], int);

int main()
{
    int N;
    cin >>N;
    fact(N);

	return 0;
}

void fact(int n)
{
    int res[200];
    res[0] = 1;
    int res_size = 1;
    for(int x = 2; x<=n;x++)
        res_size = multiply(x, res, res_size);
    for(int x = res_size - 1; x >=0; x--)
        cout<<res[x];
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;
    for(int i=0;i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while(carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}
