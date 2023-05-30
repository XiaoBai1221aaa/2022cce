#include <stdio.h>
int main()
{
	int n=0,sum=0;
	while(n!=999)
	{
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&n);
		sum += n;
	}
	printf("The total is: %d",sum-999);
}
