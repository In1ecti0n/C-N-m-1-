#include <math.h>
#include <stdio.h>
int ktra (int s) {
    int tong = 0;
    int dapan = 0;
    for (int i = 1; i < s; i++) {
        if ( s % i == 0) {
            tong = tong + i;
        }
    }    
    if (tong == s) {
        dapan++;
    }
    return dapan;
}
int main () {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (ktra(i) != 0) {
            printf("%d ", i);
            
        }
    }
}