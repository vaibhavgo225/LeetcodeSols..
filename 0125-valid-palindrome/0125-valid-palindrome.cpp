class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

    for (char c : s) {
        if (isalnum(c)) {
            ans += tolower(c);
        }
    }
    string ans2 = ans;
    reverse(ans.begin(),ans.end());
    if(ans==ans2)
    return true;
    else
    return false;

    }
};