#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool canCook(int P, vector<int>& ranks, int T)
{
    int total = 0;

    for(int i = 0; i < ranks.size(); i++)
    {
        int R = ranks[i];

        int x = (-1 + sqrt(1 + (8*T)/R)) / 2;

        total += x;

        if(total >= P) return true;
    }

    return false;
}

int main()
{
    int P; cin >> P;

    int L; cin >> L;
    vector<int> ranks(L);

    for(int i = 0; i < L; i++)
        cin >> ranks[i];

    int l = 0, r = 1e7;
    int ans = 0;

    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(canCook(P, ranks, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans;
}


// #include<iostream>
// #include<vector>
// using namespace std;

// bool canCook(int P, vector<int>& ranks, int T)
// {
//     int total = 0;

//     for(int i = 0; i < ranks.size(); i++)
//     {
//         int R = ranks[i];
//         int time = 0;
//         int j = 1;

//         while(true)
//         {
//             time += j * R;

//             if(time > T) break;

//             total++;
//             j++;

//             if(total >= P) return true;
//         }
//     }

//     return total >= P;
// }

// int main()
// {
//     int P; cin >> P;

//     int L; cin >> L;
//     vector<int> ranks(L);

//     for(int i = 0; i < L; i++)
//         cin >> ranks[i];

//     int l = 0;
//     int r = 1e7;  // safe upper bound
//     int ans = 0;

//     while(l <= r)
//     {
//         int mid = (l + r) / 2;

//         if(canCook(P, ranks, mid))
//         {
//             ans = mid;
//             r = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }

//     cout << ans;
// }