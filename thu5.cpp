# include <stdio.h>
int gcd(int a,int b){
	if(b == 0)return a;
	while(b != 0)
	{
		int c = a;
		a = b;
		b = c % b;
	}
	return a;
}
int main() {
    int a, b;
    scanf("%d%d",&a,&b);
	printf("%d\n",gcd(a,b));
}