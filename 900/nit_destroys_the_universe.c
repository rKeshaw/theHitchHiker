#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {{
    int n;
    scanf("%d", &n);
    long long blob = 0;
    long long hold;
    int faced_real = 0;
    int same = 0;
    for (int i = 0; i < n; i++) {
      scanf("%lld", &hold);
      if ((!faced_real && hold != 0)) {
        blob++;
        faced_real = 1;
        same = 1;
      }
      if (!faced_real) continue;
      if (hold == 0) {
        same = 0;
        continue;
      }
      if (!same) {
        blob++;
        same = 1;
      }
    }
    if (blob > 2) printf("%d\n", 2);
    else printf("%lld\n", blob);
  }}
}