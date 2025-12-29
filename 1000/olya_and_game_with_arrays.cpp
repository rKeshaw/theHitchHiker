#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int64_t beauty_max = 0;

    vector<int64_t> first_small;
    vector<int64_t> second_small;

    for (int i = 0; i < n; i++) {
      int mi;
      cin >> mi;

      vector<int64_t> store(mi);
      for (int i = 0; i < mi; i++) {
        cin >> store[i];
      }

      auto small1 = min_element(store.begin(), store.end());
      int64_t small_1 = *small1;
      int64_t small_2 = LLONG_MAX;

      if (small1 != store.begin()) {
        auto left = min_element(store.begin(), small1);
        small_2 = min(small_2, *left);
      }

      auto next = small1;
      next++;
      if (next != store.end()) {
        auto right = min_element(next, store.end());
        small_2 = min(small_2, *right);
      }

      beauty_max += small_2;

      first_small.push_back(small_1);
      second_small.push_back(small_2);
      // cout << small_1 << " " << small_2 << endl;
    }

    auto min_ = min_element(second_small.begin(), second_small.end());
    int keep_index = int(min_ - second_small.begin());

    cout << beauty_max - second_small[keep_index] + *min_element(first_small.begin(), first_small.end()) << endl;

  }
}