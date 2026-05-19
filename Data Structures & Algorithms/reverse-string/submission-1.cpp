class Solution {
public:
    void reverseString(vector<char>& s) {
        auto n = s.size(); 
        if (n <= 1) {return; }
        int start = 0;
        int end = n - 1; 
        int temp = 0; 
        while (end - start >= 1){ 
            temp = s[end];
            s[end] = s[start];
            s[start] = temp; 
            start++;
            end--; 
        }
        // at this point, end - start is either 0 or 1 
        
    }
};