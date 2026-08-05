class Solution {
public:
    int reverse(int x) {
        bool flag=true;
        if(x<0) flag=false;

        long long y=abs((long long)x);
        long long num=0;

        while(y){
            int rem=y%10;
            num=num*10+rem;
            y/=10;
        }

        if(flag){
            if(num>INT_MAX) return 0;
            return num;
        }else{
            if(-num<INT_MIN) return 0;
            return -num;
        }
    }
};