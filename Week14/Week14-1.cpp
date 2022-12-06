///複習:整數變數的宣告int a;a 是整數的形狀
///複習:函式的宣告(講它的形狀)
/// int sum(int a,int b);宣告它的形狀

#include <stdio.h>
int sum(int a,int b);///先宣告declare

int main()
{///在用之前,要先宣告declare或定義define
    int ans = sum(2,3);///使用 呼叫
    printf("ans: %d\n",ans);
}
int sum(int a,int b)///定義define
{
    return a+b;
}///回傳 回覆人家
