///Week04-5.cpp step03-2 利用字串,字元陣列,來把程式簡化
///只有一個if()下周可用這個版本,也可用前一個36行的版本
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
