#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    long long n, k;
    cin >> n >> k;

    vector<long long> round;
    long long keep;
    for (int _ = 0; _ < n; _++) {
      cin >> keep;
      round.push_back(keep);
    }
    sort(round.begin(), round.end());
    int max_blob = 1;
    int temp_blob = 1;
    for (int i = 1; i < n; i++) {
      if (round[i] - round[i-1] > k) temp_blob = 1;
      else temp_blob++;
      if (temp_blob > max_blob) max_blob = temp_blob;
    }
    cout << n - max_blob << endl;
    // int initial1 = 0;
    // for (int i = 0; i < n-1; i++) {
    //   if (round[i] - round[i-1] > k) initial1 = i;
    // }
    // int initial2 = 0;
    // for (int i = n-1; i > 0; i--) {
    //   if (round[i] - round[i-1] > k) initial2 = i-1; 
    // }
    // if (initial1 < n - initial2) cout << initial1;
    // else cout << initial2;
    // cout << endl;
  }
}