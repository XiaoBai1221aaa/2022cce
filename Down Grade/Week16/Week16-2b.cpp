#include <stdio.h>
int main()
{
	int a[6],i,min,max;
	scanf("%d",&a[0]);
	min=a[0];
	max=a[0];
	for(i=1;i<6;i++)
	{
	scanf("%d",&a[i]);
	if(a[i]>max)max=a[i];
	if(a[i]<min)min=a[i];
	}
	printf("%d",max-min);
}
