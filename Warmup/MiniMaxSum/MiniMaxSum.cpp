#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   int val, i;
   long long int sum = 0;
   vector<int> array;
   for(i = 0; i< 5; i++)
   {
       cin >> val;
       sum += val;
       //cout<<sum<<" ";
       array.push_back(val);
    }
    sort(array.begin(), array.end());
    cout<<sum-array[4]<<" "<<sum-array[0];
    
    cout<<endl;
	return 0;
}

