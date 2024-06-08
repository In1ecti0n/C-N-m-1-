# include <stdio.h>
# include <math.h>
int ktra (int s) {
    int dapan = 0;
    for (int i = 2; i <= sqrt(s); i++) {
        if (s % i == 0) {
            dapan ++;
        }
    }
    return dapan;
}
int main() {
    int n;
    scanf("%d", &n);
    int s = 2;   
    int a = 0;
    while (a < n) {
        if (ktra(s) == 0) {
            printf("%d\n", s);
            a++;
        }
        s++;
    }
}