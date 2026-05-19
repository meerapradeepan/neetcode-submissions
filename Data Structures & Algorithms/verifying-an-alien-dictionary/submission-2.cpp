class Solution {
public:
    bool sorted (string s1, string s2, std::map<char, int> alphOrder){
        auto n1 = s1.length(); 
        auto n2 = s2.length(); 
    
        int i = 0; 
        while (i < min(n1, n2)){
            auto idx1 = alphOrder.find(s1[i])->second; 
            auto idx2 = alphOrder.find(s2[i])->second; 

            if (idx1 < idx2) { return true; }
            if (idx1 > idx2) {return false; }
            i++; 
        }
        return n1 < n2; 

    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        int numWords = words.size();
        int alphSize = order.length(); 
        if (numWords <= 1){return true; }
        
        std::map<char, int> alphOrder; 
        for(int i =0; i < alphSize; i++){
            alphOrder[order[i]] = i; 
        }

        for (int i = 0; i < numWords - 1; i++){
            if (!sorted(words[i], words[i+1], alphOrder)) return false; 
        }
        return true; 
    }
};