class Solution {
public:
    void vecinsert (vector<int>& stones, int start, int end, int val){ 
        if (start > end) { stones.insert(stones.begin() + start, val); return; }
        int i = start + (end - start) / 2; 
        if (stones[i] < val) { vecinsert(stones, i + 1, end, val);}
        else {vecinsert(stones, start, i - 1, val);}
    }
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end());
        while (stones.size() > 1){
            int n = stones.size();
            auto x = stones[n-2];
            auto y = stones[n-1];
            stones.pop_back();
            stones.pop_back(); 
            if (x != y) {vecinsert(stones, 0, (int)stones.size() - 1, y - x); }
        }
        return stones.size() == 1 ? stones[0] : 0; 
    }
};