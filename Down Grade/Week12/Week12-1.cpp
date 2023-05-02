///Leetcode 258 Add Digits
int addDigits(int num){
    while(num>=10){//如果num是2位數以上,繼續進行剝皮法

        int ans=0;
        while(num>0){//剝皮法
            ans+=num%10;//個位數
            num=num/10;//數字變小了
        }
        num=ans;//最後答案放回num以便下一次在剝皮
    }
    return num;
}
