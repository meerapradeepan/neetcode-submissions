class Solution {
public:
    string commonPrefix (string str1, string str2){
        string ret = "";
        for (int i = 0; i < min(str1.length(), str2.length()); i++){

            if (str2[i] == str1[i]) {
                auto x = std::string (1, str2[i]);
                ret = ret.append(x);
                }

            else {break;}
        }
        return ret;
        
    }
    string longestCommonPrefix(vector<string>& strs) {
        auto n = strs.size();
        if (n == 0) { return "";}
        if (n == 1) { return strs[0];}
        // n >= 3 
        string ret = commonPrefix(strs[0], strs[1]);
        for (int i = 2; i < n; i ++){
            ret = commonPrefix(ret, strs[i]);
        }
        return ret;
    }
};