///Week07-4.cpp step02-2 Quick Sort
///��100�U�ӼƦr�n�Ƨ�
///���e���w�wsort, selection sort �� 10000�������j��
///����Quick Sort�u�n2000�U���N�����F
#include <stdio.h>
#include <stdlib.h>///qsort()
int compare(const void*p1,const void *p2)
{
    return *(int*)p1 -*(int*)p2;
}
int main()
{
    int a[10] = {9,8,7,1,2,3,6,5,4,0};
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)printf("%d ",a[i]);
}