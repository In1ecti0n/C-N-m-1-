#include <stdio.h>
int  main () {
    int n, a[100];
    int dem;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &dem);
        for (int c = 0; c < dem; c ++) {
            scanf("%d", &a[c]);
        }
        for (int j = 0; j < dem; j++) {
        	if (a[j] < 0) {
                a[j] = - a[j];
            }
            if (a[j] % 2 == 0) {
                printf("%d ", a[j]);
            }
        }
        printf("\n");     
    }

}
