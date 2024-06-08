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
long long lcm(int a,int b){
	return 1ll*a * b/gcd(a,b);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n%lld",gcd(a,b),lcm(a,b));
}
