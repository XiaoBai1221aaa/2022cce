///字串可能很長,可能很短,不知道長度是多少,怎麼做迴圈?
///字串最後面,一定是0值又叫做NULL空,又叫做'\0'
#include <stdio.h>
int main()
{
    char line[3000];///很大的字母串的空間讓你用喔

    printf("請輸入很長很長的字母,不要夾空格,結尾 Enter\n");

    scanf("%s",line);
    printf("他有幾個字母呢?\n");
    printf("%s\n",line);
    int count =0;
    for(int i=0;line[i]!=0;i++){
        count ++;
    }
    printf("count:%d\n",count);
}
