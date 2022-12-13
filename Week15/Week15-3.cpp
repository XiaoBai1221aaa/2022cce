#include <stdio.h>
///49 就是數字'1'
///65 就是大寫'A'
///97 就是小寫'a'
int main()
{
    ///'A'其實就是 65 電腦會幫你算
    /// 65就是大寫的'A'
    printf("A 的值是%d\n",'A');///印出:A的值是65
    printf("B 的值是%d\n",'B');///印出:B的值是66
    printf("C 的值是%d\n",'C');///印出:C的值是67

    for(int c='A' ;c<='Z';c++){///小心,c是小寫的
    printf("%d的值是%d\n",c,c);
    }
}
