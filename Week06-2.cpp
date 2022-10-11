///畫星星,口訣:左手i,右手j
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        ///printf("%d樓 有%d星\n",i,2*i-1);
        ///printf("%d樓 %d空格\n",i,5-i);
        int space=5-i,star=2*i-1;
        for(int k=0; k<space; k++)
            printf(" ");
        for(int k=0; k<star; k++)
            printf("*");
        printf("\n");
    }
}
