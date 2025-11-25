#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) printf("First\n");
    else if (b > a) printf("Second\n");
    else {
      if (c % 2) printf("First\n");
      else printf("Second\n");
    }
  }
}
