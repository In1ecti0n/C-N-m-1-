#include <stdio.h>
int tong (int s) {
    int n = 0;
    while ( s != 0) {
    n = n + s % 10;
    s = s /10;
    }
    return n;

}
int main () {
    int a, b;
    scanf("%d%d", &a, &b);
    if (tong(a) <= tong(b)) {
        printf("%d %d", a, b);
    }
    else {
        if (tong(a) > tong (b)) {
            printf("%d %d", b, a);
        }

    }



}