/*
Question link -> https://leetcode.com/problems/bulls-and-cows/
*/

class Solution {
public:
    string getHint(string s, string g) {
        int n = s.size();
        int bull = 0;
        int cows = 0;
        vector<int> v (10);
        
        for(int i = 0; i < n; i++){
            if(s[i] == g[i]){
                bull++;
            }
            else{
                if(v[s[i]-'0']++ < 0)
                    cows++;
                if(v[g[i]-'0']-- > 0)
                    cows++;
            }
        }
        return to_string(bull)+'A'+to_string(cows)+'B';      
    }
};