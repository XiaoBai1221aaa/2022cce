#include <stdio.h>
int main()
{
	char c[100];
	int i;
	scanf("%s",&c);
	i=0;
	while(c[i]!='\0'){
		if(c[i]!='2')
		printf("%c",c[i]);
		i++;
	}
	printf("\n");
}


