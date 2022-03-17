#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> B(N);
    for(int i = 0; i< N; i++)
    {
        cin >> B[i];
        B[i] %= 2;
    }
    int ans = 0;
    for(int i=0; i< N -1 ; ++i)
    {
        if(B[i] == 1) {
            ans += 2;
            B[i]--;
            B[i + 1] = (B[i + 1] + 1 ) % 2;
        }
    } 
    if(B[N - 1] == 1) cout << "NO"<<endl;
    else cout << ans << endl;
    
	return 0;
}
