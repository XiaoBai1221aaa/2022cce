///�������۰��k,��̤j���]��
///�n��long long int ����,�Ʀr�ܤj
#include <stdio.h>
int main()
{
        long long int a,b,c;///�Ѥj,�ѤG,�ѤT
        scanf("%lld %lld",&a,&b);
        while(1){ ///�j��@����
                c=a % b;///�Ѥj,�ѤG,�ѤT
                printf("a:%lld b:%lld c:%lld\n",a,b,c);
                if(c==0) break;
                a=b;
                b=c;
        }
        printf("���׬O: %lld\n",b);
}
