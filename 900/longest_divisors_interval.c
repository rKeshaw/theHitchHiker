#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  long long keep;
  for (int _ = 0; _ < t; _++) {
    scanf("%lld", &keep);
    int count_max = 1;
    while (1) {
      if (keep % count_max == 0) {
        // keep /= count_max;
        count_max++;
      } else break;
    }
    printf("%d\n", count_max - 1);
  }
}