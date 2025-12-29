#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    bool check_two = false;
    if (k == 4) check_two = true;

    int hold;
    int min_gap = k-1;
    int two_even = 0;
    // int ops = 0;
    for (int i = 0; i < n; i++) {
      cin >> hold;
      min_gap = min(min_gap, (((hold + k - 1) / k) * k) - hold);
      if (check_two) {
        if (!(hold % 4)) {
          two_even = 2;
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          break;
        }
        if (!(hold % 2)) {
          two_even = min(2, two_even + 1);
        }
        // if (two_even == 2) break;
      }
    }
    if (!check_two) {
      cout << min_gap << endl;
    } else if (check_two) {
      cout << min(2 - two_even, min_gap) << endl;
    }
  }
}