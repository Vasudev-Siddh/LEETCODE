class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(),i,c=0,f=0;
        for(i=n-1;i>=0;i--){
            if(s[i]==32 && f==0){
                continue;
            }
            else if(s[i]!=32){
                f=1;
                c++;
            }
            else if(s[i]==32 && f==1){
                break;
            }
            else if(s[i]==32){
                    break;
            }
            
        }
    return c;
    }
};