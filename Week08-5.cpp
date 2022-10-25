///只能有兩個迴圈,但剛剛的for是三個迴圈
///先寫出2層for迴圈的,再翻譯成while版
///口訣:正方形
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
        {
            ///全部 n層樓 第i樓有幾個空格呢?n-i個空格
            ///k<=n-i印空格
            if(k<=n-i)
                printf(" ");///有時候印空格
            else
                printf("*");///有時候印星星
        }
        printf("\n");
    }
}
