#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int peak = 100001;
  int hold;
  for (int i = 0; i < n; i++) {
    cin >> hold;
    peak = min(peak, abs(hold));
  }
  cout << peak;
}