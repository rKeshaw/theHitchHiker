#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int32_t t;
  cin >> t;

  while (t--) {
    int32_t n, k;
    int64_t q;
    cin >> n >> k >> q;

    vector<int64_t> gaps;

    int64_t hold;
    int32_t gap = 0;
    for (int i = 0; i < n; i++) {
      cin >> hold;
      if (hold <= q) {
        gap++;
      } else {
        if (gap >= k) gaps.push_back(gap);
        gap = 0;
      }
    }
    if (gap >= k) gaps.push_back(gap);

    int64_t ways = 0;
    // cout << gaps.size() << endl;
    for (int i = 0; i < gaps.size(); i++) {
      // cout << gaps[i] << endl;
      ways += (gaps[i] - k + 1) * (gaps[i] - k + 2) / 2;
      // cout << ways << endl;
    }

    cout << ways << endl;
  }
}