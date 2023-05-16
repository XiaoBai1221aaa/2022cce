#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	n>0&&n<1000;
	printf("%d=50*%d+",n,n/50);
	printf("10*%d+",(n%50)/10);
	printf("5*%d+",(n%10)/5);
	printf("1*%d",(n%5)/1);
}
