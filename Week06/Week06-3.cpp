///���ƷQ�n���� 51/68
/// �ե������Ʀr,�ݯण��㰣
#include <stdio.h>
int main()
{
    printf("�п�J2�Ӿ��,�n����: ");
    int a,b;
    scanf("%d %d", &a,&b);///51 68

    int ans; ///����������(�̤j���]��_
    for (int i=1; i<=a; i++) ///1...51��������
    {
        if(a%1==0 && b%1==0) ///�����
        {
            ans = i;///�O�U�o�ӼƦr
        }
    }
    printf("ans: %d �i����", ans);
    ///�⵪�צL�X��
}
