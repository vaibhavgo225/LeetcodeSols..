class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string k = "";
        int t=0;
        for(int i=0;i<s.size();i++){
            bool found=false;
            for(int j=0;j<k.size();j++){
                if(s[i]==k[j]){
                    found=true;
                    t = max(t, (int)k.size());
                    k.erase(0,j+1);
                    k+=s[i];
                    break;
                    
                }
            }
            if(!found){
                    k+=s[i];
                }
        }
        t = max(t, (int)k.size());
        return t;
    }
};