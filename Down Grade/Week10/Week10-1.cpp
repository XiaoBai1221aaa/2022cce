///Step01-1 C++ std::vector �i�ܤj�p���}�C
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    ///int a[10];///�T�w�j�p,����W�L
    ///std::vector<int> a; ///�j�p�Ʀh��,�i�H��
    vector<int> a;///�ŧi

    for(int i=0;i<10;i++){
        a.push_back(i*20);///�[�J����
    /// scanf("%d",&a[i]);
    /// printf("%d",a[i]);
    }

    for(int i=0;i<10;i++){
        printf("%d ",a[i]);///�ϥΤ�k�@��
    }
}
