#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char target[10][11];
        for (int i = 0; i < 10; i++) {
            scanf("%s", target[i]);
        }
        int total = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (target[i][j] == 'X') {
                    int ring = 0;
                    if (i == 0 || i == 9 || j == 0 || j == 9) {
                        ring = 1;
                    } else if (i == 1 || i == 8 || j == 1 || j == 8) {
                        ring = 2;
                    } else if (i == 2 || i == 7 || j == 2 || j == 7) {
                        ring = 3;
                    } else if (i == 3 || i == 6 || j == 3 || j == 6) {
                        ring = 4;
                    } else {
                        ring = 5;
                    }
                    total += ring;
                }
            }
        }
        printf("%d\n", total);
    }
    return 0;
}
