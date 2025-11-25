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
    int blob = 1;
    for (int _ = 0; _ < n-1; _++) {
      cin >> hold;
      if ((hold - keep) % 2) {
        blob++;
      }
      keep = hold;
    }
    cout << n - blob << endl;
  }
}