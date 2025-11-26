#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    int pos = (n + 1) / 2;

    long long median_sum = 0;
    long long arr[n * k];
    for (int i = 0;  i < n * k; i++) {
      cin >> arr[i];
    }

    int begin_ = 1;
    int end_ = k*n;
    while (begin_ <= end_) {
      begin_ += (pos - 1);
      end_ -= (n - pos + 1);
      median_sum += arr[end_];
    }

    cout << median_sum << endl;
  }
}