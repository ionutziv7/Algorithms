#include <iostream>
using namespace std;

long strangeCounter(long t) {
    long value=3, start = 1, end=3;
    while(1) {
        if(start <=t && t <= end)
        {
           long position = t - start;
           return value - position;
        }
        start = end + 1;
        value *= 2;
        end = end + value;
    }
}

int main()
{
    long t;
    cin >> t;
    long result = strangeCounter(t);
    cout << result << "\n";
    
    return 0;
}
