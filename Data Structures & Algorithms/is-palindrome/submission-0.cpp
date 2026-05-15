class Solution {
public:
    bool isPalindrome(string s) {
       std::vector<char> forward;
       std::vector<char> backward;
       for (int i = 0; i < s.length(); i++){
        if (iswalnum(s[i])) 
        {forward.emplace_back(std::tolower(s[i])); }
       }
       for (int i = s.length() - 1; i >= 0; i--){
        if (iswalnum(s[i])) 
        {backward.emplace_back(std::tolower(s[i])); }
       }
       return forward == backward; 
    }
};
