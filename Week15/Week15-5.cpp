///�r��i��ܪ�,�i��ܵu,�����D���׬O�h��,��򰵰j��?
///�r��̫᭱,�@�w�O0�ȤS�s��NULL��,�S�s��'\0'
#include <stdio.h>
int main()
{
    char line[3000];///�ܤj���r���ꪺ�Ŷ����A�γ�

    printf("�п�J�ܪ��ܪ����r��,���n���Ů�,���� Enter\n");

    scanf("%s",line);
    printf("�L���X�Ӧr���O?\n");
    printf("%s\n",line);
    int count =0;
    for(int i=0;line[i]!=0;i++){
        count ++;
    }
    printf("count:%d\n",count);
}
