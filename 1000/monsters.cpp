#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int32_t t;
  cin >> t;

  while (t--) {
    int32_t n;
    int64_t k;
    cin >> n >> k;

    map<int64_t, vector<int64_t>> remains;
    int64_t hold;
    for (int i = 1; i < n+1; i++) {
      cin >> hold;
      (remains[hold % k]).push_back(i);
    }

    for (auto i: remains[0]) {
      cout << i << " ";
    }

    for (auto i = remains.rbegin(); i != remains.rend(); i++) {
      if (i->first == 0) continue;
      for (int j = 0; j < i->second.size(); j++) {
        cout << i->second[j] << " ";
      }
    }
    cout << endl;
  }
}