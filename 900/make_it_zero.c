#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int hold;
    int outt = 0;
    int count_zero = 0;
    for (int i = 0; i < n; i++) {
      scanf("%d", &hold);
      if (!hold) count_zero++;
      outt ^= hold;
    }
    if (count_zero == n) printf("0\n");
    else if (outt == 0) {
      printf("1\n");
      printf("1 %d\n", n);
    }
    else {
      if (!(n%2)) {
        printf("2\n");
        printf("1 %d\n", n);
        printf("1 %d\n", n);
      } else {
        printf("4\n");
        printf("1 %d\n", n-1);
        printf("1 %d\n", n-1);
        printf("%d %d\n", n-1, n);
        printf("%d %d\n", n-1, n);
      }
    }
  }
}