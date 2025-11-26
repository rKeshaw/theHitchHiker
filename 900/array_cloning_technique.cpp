#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr(n);
        map<long long, long long> map_arr;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            map_arr[arr[i]]++;
        }

        int most_count = 0;
        int int_most = 0;
        for (auto i: map_arr) {
            if (i.second > most_count) {
                most_count = i.second;
                int_most = i.first;
            }
        }

        int rest = n - most_count;
        long long action = 0;

        while (rest > 0) {
            action += min(rest, most_count) + 1;
            rest -= most_count;
            most_count *= 2;
        }
        
        cout << action << "\n";
    }
}
