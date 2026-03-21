#include <iostream>
#include <vector>
using namespace std;

// Function to check if we can assign books so no student reads more than maxPages
bool canAssign(const vector<int>& books, int m, int maxPages) {
    int students = 1; // start with first student
    int pages = 0;

    for(int b : books) {
        if(pages + b > maxPages) { // need a new student
            students++;
            pages = b;
            if(students > m) return false; // too many students
        } else {
            pages += b;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> books(n);
        int sum = 0, maxBook = 0;

        for(int i = 0; i < n; i++) {
            cin >> books[i];
            sum += books[i];
            if(books[i] > maxBook) maxBook = books[i];
        }

        int low = maxBook, high = sum, ans = sum;

        while(low <= high) {
            int mid = (low + high) / 2;
            if(canAssign(books, m, mid)) {
                ans = mid;
                high = mid - 1; // try smaller max
            } else {
                low = mid + 1; // need bigger max
            }
        }

        cout << ans << endl;
    }

    return 0;
}