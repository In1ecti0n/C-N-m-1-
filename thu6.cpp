# include <stdio.h>
int ucln (int a, int b) {
    while (a != b) {
        if (a < b) {
            b = b - a;
        }else {
            a = a - b;
        }
    }
    return a;
}
int bcnn (int a, int b) {
    int c = (a*b)/ucln(a,b);
    return c;
}
int main () {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n%d", ucln(a, b), bcnn(a, b));
}