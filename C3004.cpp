# include <stdio.h>
# include <math.h>
int ucln (int a, int b) {
    while (a != b) {
        if (a < b) {
            b = b - a;
        }else {
            a = a - b;
        }
    }
    printf("%d\n", a);
}
int bcnn (int a, int b) {
        int n = a + 1;
        while ( a < n) {
            if ( n % a == 0 && n % b == 0) {
                printf("%d\n", n);
                break;
            }
            n++;
        }
        
    }
int main () {
    int a, b;
    scanf("%d%d", &a, &b);
    ucln(a, b);
    bcnn(a, b);


}