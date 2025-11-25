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
    int out_len = 0;
    int hold = 0;
    int keep = 0;
    string output = "";
    for (int i = 0; i < n; i++) {
      cin >> hold;
      out_len++;
      output += to_string(hold);
      output += " ";
      if (keep != 0) {
        if (keep > hold) {
          out_len++;
          output += to_string(hold);
          output += " ";
        }
      }
      keep = hold;
    }
    cout << out_len << endl;
    cout << output << endl;
  }
}