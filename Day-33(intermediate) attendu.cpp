#include <iostream>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char b[n];
        scanf("%s", b);
        int d = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] == '0') {
                d++;
            }
        }
        if (d > 30) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}
