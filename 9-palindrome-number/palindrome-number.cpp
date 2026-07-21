class Solution {
public:
    bool isPalindrome(int x) {
        long long int t=x;
        long long int r=0;
        if(x<0) return false;
        while(t){
            int dig=t%10;
            r=r*10+dig;
            t/=10;
        }
        return r==x;

    }
};