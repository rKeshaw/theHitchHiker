#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int32_t t;
  cin >> t;

  while (t--) {
    int32_t n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int64_t> front;
    map<char, int64_t> back;
    vector<int64_t> count_front;
    vector<int64_t> count_back;
    int64_t unique_front = 0;
    int64_t unique_back = 0;

    for (int i = 0; i < n; i++) {
      if (!front[s[i]]) {
        unique_front++;
      }
      count_front.push_back(unique_front);
      front[s[i]]++;
    }

    for (int i = n; i > 0; i--) {
      if (!back[s[i-1]]) {
        unique_back++;
      }
      count_back.push_back(unique_back);
      back[s[i-1]]++;
    }

    int64_t maxx = 0;
    for (int i = 0; i < n-1; i++) {
      maxx = max(maxx, count_front[i] + count_back[n-i-2]);
    }

    cout << maxx << "\n";
  }
}