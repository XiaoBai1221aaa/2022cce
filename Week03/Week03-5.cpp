#include <stdio.h>

int main()
{

for( int n=1; n<1000; n++ )

    if(n%8==6 && n%9==7 && n%15==13){
    printf("��8����%d\n", n%8);
    printf("��9����%d\n", n%9);
    printf("��15����%d\n", n%15);
    }
}