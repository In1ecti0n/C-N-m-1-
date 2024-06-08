#include <stdio.h>
#include <math.h>
int sont(int a){
	for(int i = 2;i <= sqrt(a);++i)
	{
		if(a % i == 0)return 0;
	}
	return a > 1;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a > b)
	{
		int c = a;
		a = b;
		b = c;
	}
	for(int i = 2;i <= 32;++i)
	{
		if(sont(i))
		{
			if(sont(pow(2,i) - 1))
			{
				long long shh = pow(2,i - 1) * (pow(2,i) - 1);
				if(shh <= b&& shh >= a)printf("%lld ",shh);
			}
		}
	}
}