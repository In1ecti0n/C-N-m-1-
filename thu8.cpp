# include <stdio.h>
# include <math.h>
int main () {
    int n, z;
    scanf("%d", &z);
    for (int j = 1; j <= z; j++) {
        scanf("%d", &n);
        printf("Test %d: ", j);
        for ( int i = 2; i <= n; i++) {
            int dem = 0;
            if (n % i == 0) {
                while ( n % i == 0) {
                dem ++;
                n = n / i;
                }
                printf("%d(%d) ", i, dem);
            }
        }
        printf("\n");
    }

}