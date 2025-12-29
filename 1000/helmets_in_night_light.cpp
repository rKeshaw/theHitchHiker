#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, p;
    cin >> n >> p;

    vector<long long> max_capability;
    max_capability.push_back(1e9);

    int hold;
    for (int i = 0; i < n; i++) {
      cin >> hold;
      max_capability.push_back(hold);
    }

    vector<long long> cost;
    cost.push_back(p);

    for (int i = 0; i < n; i++) {
      cin >> hold;
      cost.push_back(hold);
    }

    multimap<long long, long long> store;
    for (int i = 0; i < n+1; i++) {
      store.insert({cost[i], max_capability[i]});
    }

    long long to_inform = n;
    long long total_cost = 0;

    to_inform--;
    total_cost += cost[0];

    for (auto i: store) {
      long long informed = min(to_inform, i.second);
      to_inform -= informed;
      total_cost += (long long) (i.first * informed);
      if (!to_inform) break;
    }

    cout << total_cost << endl;
  }
}