///Week04-5.cpp step03-2 �Q�Φr��,�r���}�C,�ӧ�{��²��
///�u���@��if()�U�P�i�γo�Ӫ���,�]�i�Ϋe�@��36�檺����
#include <stdio.h>

char mirrored_char(char c)
{
    char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    char table2[]="A___3__HIL_JM_O___2TUVWXY51SE_Z__8_";
    for(int i=0;table1[i]!=0;i++){
        if(c==table1[i])return table2[i];
    }
    return ' ';
}
int main()
{
    char c;
    scanf("%c",&c);
    printf("%c\n",mirrored_char(c));
}
