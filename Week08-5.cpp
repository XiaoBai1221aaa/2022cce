///�u�঳��Ӱj��,����誺for�O�T�Ӱj��
///���g�X2�hfor�j�骺,�A½Ķ��while��
///�f�Z:�����
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
        {
            ///���� n�h�� ��i�Ӧ��X�ӪŮ�O?n-i�ӪŮ�
            ///k<=n-i�L�Ů�
            if(k<=n-i)
                printf(" ");///���ɭԦL�Ů�
            else
                printf("*");///���ɭԦL�P�P
        }
        printf("\n");
    }
}