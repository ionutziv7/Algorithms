#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void second_solution() 
{
  int n,m;
  cin>>n;
  
  while (cin>>n>>m)
    {
        cout<<(int)(sqrt(m)+0.0000001)-(int)(sqrt(n-1)+0.0000001)<<endl;
    }
}
int main()
{
  unsigned test_cases, low_range, high_range, count = 0;
  vector<unsigned> sherlock_squares;
  cin >> test_cases;
  while(test_cases != 0)
  {
    cin >> low_range >> high_range;
    for(unsigned i = low_range; i <= high_range; ++i)
    {
      if(sqrt(i) == floor(sqrt(i)))
        count += 1;
    }
    sherlock_squares.push_back(count);
    count = 0;
    --test_cases;
  }
  for(unsigned i = 0; i < sherlock_squares.size() - 1; ++i)
    cout << sherlock_squares.at(i) << endl;
  cout << sherlock_squares.at(sherlock_squares.size() - 1);
  
  //second_solution();
  return 0;
}
