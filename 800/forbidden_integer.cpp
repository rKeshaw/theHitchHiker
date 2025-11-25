#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1) {
      printf("YES\n%d\n", n);
      for (int _ = 0; _ < n; _++) printf("1%c", ' ');
      printf("\n");
    } else {
      if (k == 1) printf("NO\n");
      else if (!(n % 2)) {
        int m = n / 2;
        printf("YES\n%d\n", m);
        for (int _ = 0; _ < m; _++) printf("2%c", ' ');
        printf("\n");
      } else {
        if (k >= 3) {
          int has_two = (n - 3) / 2;
          printf("YES\n%d\n", 1 + has_two);
          printf("3");
          for (int i = 0; i < has_two; i++) printf(" 2");
          printf("\n");
        } else printf("NO\n");
      }
    }
  }
}