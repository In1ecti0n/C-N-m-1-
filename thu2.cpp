#include <stdio.h>
#include <string.h>
int check(char c[]){
	int tong = 0;
	for(int i = 0;i < strlen(c);++i)
	{
		tong += c[i] - '0';
	}
	return (tong % 10 == 0);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n;++i)
	{
		char c[100];
		scanf("%s",c);
		if(check(c))printf("YES\n");
		else printf("NO\n");
	}
}