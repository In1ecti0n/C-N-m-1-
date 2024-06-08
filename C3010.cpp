#include <math.h>
#include <stdio.h>
int giaithua (int n) {
    int ketqua = 1;
    for (int i = 1; i <= n; i++) {
        ketqua *= i;
    }
    return ketqua;
}
int tachso (int n) {
    int tong = 0;
    while ( n != 0) {
        tong += giaithua(n  % 10);
        n /= 10;
    }
    return tong;
}
int main () {
    int n;
    int tong = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        int k = i;
        while (i != 0) {
            tong == giaithua(i%10);
            i /= 10;
        }
        if (tong == k) {
            printf("%d ", k);
        }
        
    }
}