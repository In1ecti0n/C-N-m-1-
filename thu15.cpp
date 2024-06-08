#include <stdio.h>
int ktra (int s) {
    while( s != 0) {
    int temp = s % 10;
    if (temp % 2 != 0) {
        return 0;
    }
    s = s /10;
    }
    return 1;

}
int main () {
    int n, s;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        scanf("%d", &s);
        if (ktra(s) == 1) {
            printf("YES\n");

        }else {
            printf("NO\n");
        }
    }
}