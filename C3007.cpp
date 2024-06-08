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
int ktra1 (int s) {
    int a[1000];
    int dem = 0;
    while ( s > 0) {
        a[dem] = s % 10;
        dem++;
        s = s /10;
    }
    for (int i = 0; i < (dem/2); i++) {
        if (a[i] != a[(dem - i -1)]) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int n, a, b;
    int dem = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &a, &b);
        for (int i = a; i <= b; i++) {
        if (ktra1(i) && ktra(i) == 0) {
            if (dem == 10) {
                dem = 0;
                printf("\n");
            } 
            printf("%d ", i);
            dem++;
        }
        
    }
    printf("\n\n");
    }
}