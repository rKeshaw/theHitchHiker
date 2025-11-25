#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    long long a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

    vector<pair<int, int>> possible_move = {{a,b},{a,-1*b},{-1*a,b},{-1*a,-1*b},{b,a},{b,-1*a},{-1*b,a},{-1*b,-1*a}};

    set<pair<int, int>> attack_position;
    for (auto i: possible_move) {
      auto xh = xk - i.first;
      auto yh = yk - i.second;
      if ((abs(xh - xq) == a && abs(yh - yq) == b) || (abs(xh - xq) == b && abs(yh - yq) == a)) attack_position.insert({xh, yh});
    }

    cout << attack_position.size() << endl;
  }
}