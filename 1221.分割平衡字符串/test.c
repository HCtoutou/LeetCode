class Solution {
public:
    int balancedStringSplit(string s) {
        int num=0,n=0;
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            if(c=='L')
            n++;
            else
            n--;
            if(n==0)
            num++;
        }
        return num;
    }
};
