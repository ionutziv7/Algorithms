#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

inline int nxt() {
    int n;
    scanf("%d", &n);
    return n;
}

int main()
{
    int n = nxt();
    vector<int> a(n);
    for(int i = 0;i<n;i++)
    {
        a[i] = nxt();
    }
    int ans = -1;
    for(int i=0;i<n;i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                if(i - j < ans || ans == -1)
                    ans = i - j;
            }
        }
    }
    cout << ans<<"\n";
	return 0;
}
