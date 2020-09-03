class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       int len = s.length();
        for(int i=len/2;i>=1;i--){
            if(len%i==0){
                int numRepeats = len/i;
                string Sub = s.substr(0,i);
                string ans;
                for(int j=0;j<numRepeats;j++){
                    ans.append(Sub);
                }
                if(ans==s) return true;
            }
        }
        
        return false;
    }
};