class Solution {
public:
    int reverse(int x) {
        double result;
        int n=0;
        while(x!=0){
            n=x%10;
            x=x/10;
            result=result*10+n;
        }
        if(result>pow(2,31)-1||result<pow(-2,31))
        return 0;
        else
        return result;
    }
};
