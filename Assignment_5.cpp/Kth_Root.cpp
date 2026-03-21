#include<iostream>
using namespace std;

long long power(long long base, int exp, long long n)
{
    long long result = 1;

    for(int i = 0; i < exp; i++)
    {
        if(result > n / base)
            return n + 1;

        result *= base;
    }

    return result;
}

int main()
{
    int t; cin >> t;

    while(t--)
    {
        long long n;
        int k;
        cin >> n >> k;

        long long l = 1, r = n;
        long long ans = 0;

        while(l <= r)
        {
            long long mid = l + (r - l) / 2;

            if(power(mid, k, n) <= n)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }
}