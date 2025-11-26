#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);

    long long count_0 = 0;
    long long count_1 = 0;

    long long keep;
    for (int i = 0; i < n; i++) {
      scanf("%lld", &keep);
      if (keep == 0) count_0++;
      else if (keep == 1) count_1++;
    }

    printf("%lld\n", (1LL << count_0) * count_1);    
  }
}