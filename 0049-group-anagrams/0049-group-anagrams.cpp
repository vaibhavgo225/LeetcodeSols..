class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> k = strs;
        for(string &word:k){
            sort(word.begin(),word.end());
        }
        for(int i=0;i<k.size();i++){
            int t=1;
            for(int j=i+1;j<k.size();j++){
            if(k[i]==k[j]){
                string c=strs[j];
                strs[j]=strs[i+t];
                strs[i+t]=c;
                string d=k[j];
                k[j]=k[i+t];
                k[i+t]=d;
                t++;
            }
            }
        }
        vector<vector<string>> ans;
    vector<string> group;

    group.push_back(strs[0]);

    for (int i = 1; i < k.size(); i++) {
        if (k[i] == k[i - 1]) {
            group.push_back(strs[i]);
        } else {
            ans.push_back(group);
            group.clear();
            group.push_back(strs[i]);
    }
}

            ans.push_back(group); 
            return ans;
    }
};