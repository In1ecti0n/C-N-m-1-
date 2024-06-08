#include <stdio.h>
int main () {
    int s;
    int tong = 0;
    scanf("%d", &s);
    for (int i = 1; i < s; i++) {
        if ( s % i == 0) {
            tong = tong + i;
        }
    }    
    if (tong == s) {
        printf("%d", s);
    }else {
        printf("ko co");
    }
}