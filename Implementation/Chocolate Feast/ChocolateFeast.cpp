#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int T, N, C, M, w, res;
    cin >> T;
    while (T--)
    {
        cin >> N >> C >> M;
        w = res = N / C;
        while (w >= M) 
        {
            res += w / M;
            w = (w % M) + w/M;
        }
        cout << res << "\n";
    }
    return 0;
}
