 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canPlace(vector<int>& arr, int n, int c, int dist)
{
    int count = 1;  // first cow
    int lastPos = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] - lastPos >= dist)
        {
            count++;
            lastPos = arr[i];

            if(count == c)
                return true;
        }
    }

    return false;
}

int main()
{
    int n, c;
    cin >> n >> c;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int l = 1;
    int r = arr[n-1] - arr[0];
    int ans = 0;

    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(canPlace(arr, n, c, mid))
        {
            ans = mid;
            l = mid + 1;   // try bigger distance
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans;
}
