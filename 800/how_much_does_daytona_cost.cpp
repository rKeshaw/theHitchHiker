#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int hold;

    for (int i = 0; i < n; i++) {
      cin >> hold;
      if (hold == k) {
        cout << "yes" << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
      } else if (i == n - 1) {
        cout << "no" << endl;
      }
    }
  }
}