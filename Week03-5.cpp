#include <stdio.h>

int main()
{

for( int n=1; n<1000; n++ )

    if(n%8==6 && n%9==7 && n%15==13){
    printf("用8除於%d\n", n%8);
    printf("用9除於%d\n", n%9);
    printf("用15除於%d\n", n%15);
    }
}
