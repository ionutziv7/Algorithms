#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    vector<int> c;
    cin >> n>>m;
    for(int i = 0; i< m; i++)
    {
        int temp;
        cin >> temp;
        c.push_back(temp);
    }
    int ans = 0;
    if(n == m)
    {
        cout << ans << endl;
        return 0;
    }
    sort(c.begin(), c.end());
    for(int i = 0; i< m -1; i++)
        ans = max(ans, abs(c[i] - c[i+1]) /2);
    ans = max(max(ans, c[0]), (n-1)-c[m-1]);
    cout<<ans<<endl;
	return 0;
}
