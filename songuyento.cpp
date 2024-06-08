#include <stdio.h>
#include <math.h>
int ktra (int s) {
    int dapan = 0;
    for (int i = 2; i <= sqrt(s); i++) {
        if (s % i == 0) {
            dapan ++;
        }
    }
    return dapan;
}
int main () {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (ktra(i) == 0 ) {
            printf("%d\n", i);
        }
    }
    return 0;
}

