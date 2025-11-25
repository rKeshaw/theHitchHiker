#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);
    int score = 0;
    int hold;
    for (int i = 0; i < n-1; i++) {
      scanf("%d", &hold);
      score += hold;
    }
    printf("%d\n", -1 * score);
  }
}