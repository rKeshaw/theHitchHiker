#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        long long counter = 0;
        int danger = 0;

        for (int i = n - 1; i > 0; i--) {
            while (arr[i] <= arr[i - 1] && arr[i-1] > 0) {
                arr[i - 1] /= 2;
                counter++;
            }
            
            if (arr[i-1] >= arr[i]) {
                printf("-1\n");
                danger = 1;
                break;
            }
            // if (arr[i - 1] == 0 && i != 1) {
            //     danger = 1;
            //     printf("-1\n");
            //     break;
            // }
        }

        if (!danger) {
            printf("%lld\n", counter);
        }
    }
}
