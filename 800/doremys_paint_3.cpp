#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> maybe_good(n);
    set<int> uniq;
    // int unq = 0;
    bool worked = true;
    for (int i = 0; i < n; i++) {
      cin >> maybe_good[i];
      uniq.insert(maybe_good[i]);
      if (uniq.size() > 2) {
        cout << "no" << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        worked = false;
        break;
      }
    }
    if (!worked) continue;
    if (uniq.size() == 1) cout << "yes" << endl;
    else if (uniq.size() == 2) {
      auto count_a = 0;
      auto count_b = 0;
      for (int i = 0; i < n; i++) {
        if (maybe_good[i] == maybe_good[0]) count_a++;
        else count_b++;
      }
      if (abs(count_a - count_b) <= 1) cout << "yes" << endl;
      else cout << "no" << endl;
    }
  }
}
