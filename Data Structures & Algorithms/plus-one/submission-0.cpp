class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> plussed = digits; 
        int i = digits.size() - 1; 
        while (i >= 0){
            if (digits[i] != 9) break; 
            i--; 
        }
        // i marks the first digit that is not 9 
        if (i == -1) {// all 9s 
            plussed.emplace_back(0); 
            plussed[0] = 1; 
            for (int i = 1; i < digits.size(); i++){
                plussed[i] = 0; 
            }
            return plussed; 
        }
        plussed[i]+=1; 
        for (int j = i +1; j < digits.size(); j++){
            plussed[j] = 0; 
        }
        return plussed; 
    }
};
