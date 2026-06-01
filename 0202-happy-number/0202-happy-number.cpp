class Solution {
public:
       int nextsum(int n){
        int sum=0;
        while(n){
            int digit =n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
       }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=nextsum(slow);
            fast=nextsum(nextsum(fast));
        }while(slow!=fast);
          if(slow==1){
            return true;
          }
          else{
            return false;
          }

    }
};