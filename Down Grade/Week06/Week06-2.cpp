///Week06-2.cpp 解 Leetcode 的程式
//不是寫完的程式,只要寫一個程式
//判斷迴文,要用到的技巧,使用for迴圈,if判斷,while迴圈
bool isPalindrome(int x){
  int x2=x;//輩分x到x2
  long long int r=0;//反過來的數字,等遺下要放在r裡面
  while(x>0){
    r=r*10+x%10;//剝皮
    x=x/10;
  }
//使用剝皮法
//x     r
//121
// 1剝皮 1
//12   10
// 2剝皮  +2=12
//1   120
//1 剝皮    +1 121
//最後x剝完,變成0...完了x不能用
if(x2 == r)return true;
else return false;
}
