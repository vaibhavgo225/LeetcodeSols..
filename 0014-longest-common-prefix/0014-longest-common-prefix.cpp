class Solution {
public:
    static bool sortl(string a, string b){
        return a.length() < b.length();
    }
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end(), sortl);

    string small= strs[0];

    while(small != ""){
         bool found=true;
    for(int i=1;i<strs.size();i++){
        if(strs[i].find(small)!= 0){
            found=false;
            break;
        }
    }
    if (found){
            return small;
        }
     small.pop_back();
     
    }
     return "";
    }
};