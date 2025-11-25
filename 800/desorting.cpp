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
    long long hold;
    cin >> hold;
    long long keep = hold;
    long long diff_probable = 1e18;
    bool desorted = false;
    for (int _ = 1; _ < n; _++) {
      cin >> hold;
      if (keep > hold) {
        cout << 0 << endl;
        desorted = true;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
      }
      diff_probable = min(diff_probable, hold - keep);
      keep = hold;
    }
    if (!desorted) {
      cout << diff_probable / 2 + 1 << endl;
    }
  }
}
