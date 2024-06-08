#include <stdio.h>
#include <math.h>
int main () {
    int s;
    scanf("%d", &s);
    int dapan = 0;
    if (s < 2) {
        return 0;
    }else {
    for (int i = 2; i <= sqrt(s); i++) {
        if (s % i != 0) {
            dapan ++;
            printf("%d", dapan);
        }
    }
    
    }
    return 0;
}