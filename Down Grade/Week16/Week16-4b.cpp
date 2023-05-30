#include <stdio.h>
int main()
{
	char a[81];
	scanf("%s",&a);
	int i=0,count=0;
	while(a[i]!='\0')
	{
	if('0'<=a[i]&&a[i]<='9')
	count++;
	i++;
	}
	printf("%d\n",count);
}
