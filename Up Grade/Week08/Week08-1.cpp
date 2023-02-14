///質數判別
///不能被約分的數字
///只能被1還有n本身 可以整除/約分
///暴力法,全部都去試,解決

#include <stdio.h>
int main()
{
    ///口訣:倒過來想(稀有的,比較好想)
    int n;
    scanf("%d",&n);///想試試n是不是質數
    int bad=0;///一開始,還沒有bad壞掉
    for (int i=2; i<n; i++) ///只能被1 還有n 本身整除}
    {
        if(n%i==0)
            bad=1; ///阿!不完美,壞掉
    }
    if (bad==0)
        printf("%d 是質數",n);
    else
        printf("%d 不好,不是質數",n);///bad
}
