///Week06-2.cpp �� Leetcode ���{��
//���O�g�����{��,�u�n�g�@�ӵ{��
//�P�_�j��,�n�Ψ쪺�ޥ�,�ϥ�for�j��,if�P�_,while�j��
bool isPalindrome(int x){
  int x2=x;//����x��x2
  long long int r=0;//�ϹL�Ӫ��Ʀr,����U�n��br�̭�
  while(x>0){
    r=r*10+x%10;//���
    x=x/10;
  }
//�ϥέ�֪k
//x     r
//121
// 1��� 1
//12   10
// 2���  +2=12
//1   120
//1 ���    +1 121
//�̫�x�駹,�ܦ�0...���Fx�����
if(x2 == r)return true;
else return false;
}
