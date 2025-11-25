#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> c, b;
    int max = 0;
    int max_count = 0;
    int hold;
    for (int i = 0; i < n; i++) {
      cin >> hold;
      if (hold > max) {
        for (int j = 0; j < max_count; j++) b.push_back(max);
        max = hold;
        max_count = 1;
      } else if (hold == max) max_count++;
      else b.push_back(hold);
    }
    for (int i = 0; i < max_count; i++) {
      c.push_back(max);
    }
    if (b.empty() || c.empty()) {
      cout << -1 << "\n";
      continue;
    }
    
    cout << b.size() << " " << c.size() << endl;
    for (int i = 0; i < b.size(); i++) cout << b[i] << " ";
    cout << endl;
    for (int i = 0; i < c.size(); i++) cout << c[i] << " ";
    cout << endl;
  }
}