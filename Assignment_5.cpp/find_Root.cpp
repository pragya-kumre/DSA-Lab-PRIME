#include <iostream>
using namespace std;

int main() {
    long long A;
    cin >> A;

    long long l = 1, r = A;
    long long ans = 0;

    while(l <= r)
    {
        long long mid = l + (r - l)/2;

        if(mid * mid <= A)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans;
    return 0;
}