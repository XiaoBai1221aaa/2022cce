///Week07-1.cpp step01-1 檔案的Input/Output
///先回憶大衣上的printf("Hello World\n");
#include <stdio.h>
int main()
{///檔案指標   檔案開啟("檔名" ,"模式");
    ///FILE*fout = fopen("file.txt","w");///寫write
       FILE*fin  = fopen("file.txt","r");///讀read

    ///printf("Hello World\n");
    ///fprintf(fout,"Hello World\n");
    char line[2000];
    ///scanf("%s",line);
    fscanf(fin,"%s",line);
    printf("現在執行目錄的檔案裡讀入 %s\n",line);

    fscanf(fin,"%s",line);
    printf("現在執行目錄的檔案裡讀入 %s\n",line);
}

