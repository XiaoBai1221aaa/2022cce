///Week04-4.cpp step03-1���X�r����Ӫ�
#include <stdio.h>
char mirrored_char(char c)
{
    if(c=='A')return 'A';
    if(c=='B')return '_';
    if(c=='C')return '_';
    if(c=='D')return '_';
    if(c=='E')return '3';
    if(c=='F')return '_';
    if(c=='G')return '_';
    if(c=='H')return 'H';
    if(c=='I')return 'I';
    if(c=='J')return 'L';
    if(c=='K')return '_';
    if(c=='L')return 'J';
    if(c=='M')return 'M';
    if(c=='N')return '_';
    if(c=='O')return 'O';
    if(c=='P')return '_';
    if(c=='Q')return '_';
    if(c=='R')return '_';
    if(c=='S')return '2';
    if(c=='T')return 'T';
    if(c=='U')return 'U';
    if(c=='V')return 'V';
    if(c=='W')return 'W';
    if(c=='X')return 'X';
    if(c=='Y')return 'Y';
    if(c=='Z')return '5';
    if(c=='1')return '1';
    if(c=='2')return 'S';
    if(c=='3')return 'E';
    if(c=='4')return '_';
    if(c=='5')return 'Z';
    if(c=='6')return '_';
    if(c=='7')return '_';
    if(c=='8')return '8';
    if(c=='9')return '_';
}
int main()
{
   for(char c = 'A';c<='Z';c++){
    printf("%c -- %c\n",c,mirrored_char(c));
   }
   for(char c = '1';c<='9';c++){
    printf("%c -- %c\n",c,mirrored_char(c));
   }
}
