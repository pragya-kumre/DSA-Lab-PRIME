#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// check if cows can be placed with given distance
bool canPlace(vector<int>& arr, int n, int c, int dist)
{
    int count = 1;              // first cow
    int lastPos = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] - lastPos >= dist)   // valid gap
        {
            count++;                  // place cow
            lastPos = arr[i];

            if(count == c)            // all cows placed
                return true;
        }
    }
    return false;                     // not possible
}

int main()
{
    int n, c;
    cin >> n >> c;                   // stalls, cows

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());    // sort stalls

    int l = 1;                       // min distance
    int r = arr[n-1] - arr[0];       // max distance
    int ans = 0;

    while(l <= r)
    {
        int mid = (l + r) / 2;       // try distance

        if(canPlace(arr, n, c, mid))
        {
            ans = mid;               // store answer
            l = mid + 1;             // try bigger
        }
        else
        {
            r = mid - 1;             // try smaller
        }
    }

    cout << ans;                     // result
    return 0;
}
