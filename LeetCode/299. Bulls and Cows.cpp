class Solution {
public:
   	string getHint(string secret, string guess) {
        
        int bull = 0;
        int cow = 0;
        int stat[10] = {0};
        
        for(int i=0; i<secret.size(); i++)
        {
            if(secret[i] == guess[i])
                bull++;
            else
                stat[secret[i] - '0']++;
        }
        
        for(int i=0; i<guess.size(); i++)
            if(secret[i] != guess[i] && stat[guess[i] - '0']-- > 0)
                cow++;
    
        return (to_string(bull) + "A" + to_string(cow) + "B");
    }
};