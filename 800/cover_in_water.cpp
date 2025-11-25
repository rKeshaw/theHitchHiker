#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    string row;
    cin >> n >> row;

    int num_empty_cell = 0;
    int required = 0;

    for (int i = 0; i < n; i++) {
      if (row[i] == '.') {
        num_empty_cell++;
        required++;
        if (required >= 3) {
          cout << 2 << endl;
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          break;
        }
      }
      if (row[i] == '#') required = 0;
    }
    if (required <= 2) cout << num_empty_cell << endl;
  }
}