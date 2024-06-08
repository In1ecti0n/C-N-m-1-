#include <stdio.h>
#include <string.h>
int dapan (int s) {
    int tong = 0;
    int sotachra;
    while (s != 0) {
        sotachra = s % 10;
        tong += sotachra;
        s /= 10;
          
    }
    return tong;

}
int main () {
    int n;
    int arr[100];
    int s;
    scanf("%d", &n);
    for (int i = 0; i <n; i++) {
        scanf("%d", &arr[i]);
        s = arr[i];
        if ((dapan(s)) % 10 != 0) {
            printf("NO\n");
        }else {
            if((dapan(s)) % 10 == 0) {
            printf("YES\n");}        
        }
        }
        return 0;
    }
