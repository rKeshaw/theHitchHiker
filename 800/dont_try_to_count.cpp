#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int num_ops = 0;
    bool found = false;
    do {
      size_t pos = x.find(s);
      if (pos != string::npos) {
        found = true;
        break;
      }
      x += x;
      num_ops++;
    } while (x.size() < 2 * s.size());

    if (!found) {
      x += x;
      size_t pos = x.find(s);
      // num_ops++;
      if (pos!=string::npos) found = true;
    }
    cout << (found ? num_ops : -1) << endl;
  }
}