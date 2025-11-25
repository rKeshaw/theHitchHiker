#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  scanf("%d", &t);
  while (t--) {
    int n, q;
    scanf("%d %d", &n, &q);
    vector<long long> sum_upto(n+1);
    long long sum = 0;
    long long keep;
    for (int i = 0; i < n; i++) {
      scanf("%lld", &keep);
      sum += keep;
      sum_upto[i+1] = sum;
    }
    for (int i = 0; i < q; i++) {

      long long l, r, k;
      scanf("%lld %lld %lld", &l, &r, &k);

      long long this_sum = sum_upto[l-1] + (r - l + 1) * k + (sum - sum_upto[r]);
      
      if (this_sum % 2) printf("yES\n");
      else printf("nO\n");
    }
  }
}