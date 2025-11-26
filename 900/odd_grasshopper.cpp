#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  
  while (t--) {
    long long x, n;
    cin >> x >> n;

    long long final_;
    long long change = 0;
    if (n % 4 == 0) change = 0;
    else if (n % 4 == 1) change = n;
    else if (n % 4 == 2) change = -1;
    else change = -1 * n - 1;

    if (x % 2 == 0) final_ = x + change * -1; 
    else final_ = x + change;

    // for (int i = 0; i < n; i++) {
    //   final_ += -1 * pow(-1, final_) * (i + 1);
    // }

    cout << final_ << endl;
  }
}