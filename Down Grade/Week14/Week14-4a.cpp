#include <stdio.h>
int main()
{
	char c[6];
	scanf("%s",&c);
	int i=0;
	while(c[i+1]!='\0')
	{
	printf("%c   ",c[i]);
	i++;
	}
	printf("%c",c[i]);
}
