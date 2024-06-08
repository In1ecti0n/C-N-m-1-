#include <stdio.h>
int ktra (long long s) {
    int a[1000], b;
    int dem = 0;
    while (s != 0) {
        b = s % 10;
        a[dem] = b;
        s = s /10;
        dem++;
    }
    for (int i = 0; i < dem; i++) {
        if (a[i] % 2 != 0 ) {
            return 0;
        }
    }
    return 1;
}
int main () {
    long long n, s;
    scanf("%lld", &n);
    for (int i = 0; i < n; i ++) {
        scanf("%lld", &s);
        if (ktra(s) == 1 && s % 2 == 0) {
            printf("YES\n");

        }else {
            printf("NO\n");
        }
    }
}

    
