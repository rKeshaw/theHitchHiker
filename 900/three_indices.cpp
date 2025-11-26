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

    int low = 0;
    int middle = 0;
    int high = 0;

    bool found_high = false;

    int hold;
    cin >> hold;
    int keep = hold;

    for (int i = 1; i < n; i++) {
      cin >> hold;
      if (hold <= keep && !found_high) {
      }
      else if (hold < keep && found_high) {
        middle = i;
        high = i+1;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
      } else if (hold > keep && !found_high) {
        low = i;
        middle = i+1;
        found_high = true;
      } 
      keep = hold;
    }

    if (low < middle && middle < high) {
      cout << "YES" << endl;
      cout << low << " " << middle << " " << high << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}