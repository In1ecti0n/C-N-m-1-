# include <stdio.h>
# include <math.h>
int ucln (int a, int b) {
    if(b == 0)return a;
	while(b != 0)
	{
		int c = a;
		a = b;
		b = c % b;
	}
	return a;
}
int main () {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i < b; i++) {
        for (int j = b; j > a; j--) {
            if (ucln(i, j) == 1 ) {
                printf("(%d,%d)\n", i, j);
                
            }
        }

    }    
        
}

