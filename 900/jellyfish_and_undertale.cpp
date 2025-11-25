#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    int n;
    cin >> a >> b;
    cin >> n;

    long long tools[n];
    for (int i = 0; i < n; i++) {
      cin >> tools[i];
    }

    int position = 0;

    long long time_to_go = 0;

    for (int i = 0; i < n; i++) {
      if (tools[i] >= a) time_to_go += a - 1;
      else time_to_go += tools[i];
    }
    cout << time_to_go + b << endl;
  }
}