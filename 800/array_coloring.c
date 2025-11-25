#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int hold;
    for (int i = 0; i < n; i++) {
      scanf("%d", &hold);
      sum += hold;
    }
    if (sum % 2) printf("no\n");
    else printf("yes\n");
  }
}