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
int ktra1 () {

}
int main () {
    int n;
    int a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
    }
    for  (int i = 2; i < n; i++) {
        if ( n  % i == 0) {
            
        }
    }
}

