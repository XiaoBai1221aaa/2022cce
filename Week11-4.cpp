///拍照時,從左到右巡,不對就交換
#include <stdio.h>
int main()
{
    int a[10]= {90,80,70,60,50,40,30,20,10,0};

    for(int i=0; i<10-1; i++)
    {
        if(a[i] > a[i+1]) ///左右大小不對時
        {
            int temp=a[i];///就交換
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++)
        printf("%d ",a[i]);
    printf("\n");///印出a[i]
     for(int i=0; i<10-1; i++)
    {
        if(a[i] > a[i+1]) ///左右大小不對時
        {
            int temp=a[i];///就交換
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++)
        printf("%d ",a[i]);
    printf("\n");///印出a[i]
     for(int i=0; i<10-1; i++)
    {
        if(a[i] > a[i+1]) ///左右大小不對時
        {
            int temp=a[i];///就交換
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++)
        printf("%d ",a[i]);
    printf("\n");///印出a[i]
     for(int i=0; i<10-1; i++)
    {
        if(a[i] > a[i+1]) ///左右大小不對時
        {
            int temp=a[i];///就交換
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++)
        printf("%d ",a[i]);
    printf("\n");///印出a[i]
}
