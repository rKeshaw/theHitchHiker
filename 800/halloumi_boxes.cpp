#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    if (k >= 2) cout << "Yes" << endl;
    else {
      auto hold = true;
      for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
          hold = false;
          break;
        }
      }
      if (hold) cout << "Yes";
      else cout << "No";
      cout << endl;
      // cout << hold ? "Yes" : "No" << endl;
    }
  }
}