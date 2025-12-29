#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int32_t t;
  cin >> t;

  while (t--) {
    int32_t n;
    cin >> n;

    vector<pair<int64_t, int64_t>> a, b;
    int64_t hold1;
    cin >> hold1;
    int64_t keep1 = hold1;
    a.push_back({hold1, 1});
    int32_t point_a = 0;
    for (int i = 1; i < n; i++) {
      cin >> hold1;
      if (hold1 == keep1) {
        a[point_a].second += 1;
      } else {
        a.push_back({hold1, 1});
        point_a++;
      }
      keep1 = hold1;
    }

    int64_t hold2;
    cin >> hold2;
    int64_t keep2 = hold2;
    b.push_back({hold2, 1});
    int32_t point_b = 0;
    for (int i = 1; i < n; i++) {
      cin >> hold2;
      if (hold2 == keep2) {
        b[point_b].second += 1;
      } else {
        b.push_back({hold2, 1});
        point_b++;
      }
      keep2 = hold2;
    }

    unordered_map<int64_t, int64_t> maxa, maxb;
    for (auto &p: a) {
      maxa[p.first] = max(maxa[p.first], p.second);
      // cout << "1 " << p.first << " " << maxa[p.first] << endl;
    }
    for (auto &p: b) {
      maxb[p.first] = max(maxb[p.first], p.second);
      // cout << "2 " << p.first << " " << maxb[p.first] << endl;
    }

    int64_t maxx = 1;
    for (int i = 0; i < 2 * n; i++) {
      // cout << "3 " << maxa[i+1] << " " << maxb[i+1] << endl;;
      maxx = max(maxx, maxa[i+1] + maxb[i+1]);
    }

    cout << maxx << endl;
  }
}