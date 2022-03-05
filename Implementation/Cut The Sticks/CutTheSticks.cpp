#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, ans, current, k;
    cin >> n;
    vector<int> arr(n);
  
    for(int i = 0; i<n;i++)
    {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    k = 0;
    while( k< arr.size())
    {
        ans = (int)arr.size() - k;
        current += (arr[k] - current);
        
        while( k < arr.size() && arr[k] - current <= 0) k++;
        
        cout<< ans << endl;
    }

	return 0;
}
