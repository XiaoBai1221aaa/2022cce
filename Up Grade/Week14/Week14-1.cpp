///�Ʋ�:����ܼƪ��ŧiint a;a �O��ƪ��Ϊ�
///�Ʋ�:�禡���ŧi(�������Ϊ�)
/// int sum(int a,int b);�ŧi�����Ϊ�

#include <stdio.h>
int sum(int a,int b);///���ŧideclare

int main()
{///�b�Τ��e,�n���ŧideclare�Ωw�qdefine
    int ans = sum(2,3);///�ϥ� �I�s
    printf("ans: %d\n",ans);
}
int sum(int a,int b)///�w�qdefine
{
    return a+b;
}///�^�� �^�ФH�a
