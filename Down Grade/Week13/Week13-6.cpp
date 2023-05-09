#include <stdio.h>
int main()
{
	int a,m,n,o,p;
	scanf("%d",&a);
	m=a/1000;
	n=a/100%10;
	o=a/10%10;
	p=a%10;
	printf("%d\n",m*8+n*4+o*2+p*1);

}
