///Week07-1.cpp step01-1 �ɮת�Input/Output
///���^�Фj��W��printf("Hello World\n");
#include <stdio.h>
int main()
{///�ɮ׫���   �ɮ׶}��("�ɦW" ,"�Ҧ�");
    ///FILE*fout = fopen("file.txt","w");///�gwrite
       FILE*fin  = fopen("file.txt","r");///Ūread

    ///printf("Hello World\n");
    ///fprintf(fout,"Hello World\n");
    char line[2000];
    ///scanf("%s",line);
    fscanf(fin,"%s",line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n",line);

    fscanf(fin,"%s",line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n",line);
}

