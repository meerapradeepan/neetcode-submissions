class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // two pointer approach
        // one pointer is where we are looking right now for next element 
        // one pointer is next index to insert at
        if (nums.empty()){return 0;}
        int nextidx = 1;
        int currlookidx = 1;
        int prev = nums[0];
        while (currlookidx < nums.size()){

            if (nums[currlookidx] != prev){

                
                nums[nextidx] = nums[currlookidx];
                nextidx++;
            } 
            prev = nums[currlookidx];
            currlookidx++;
        }
        return nextidx; 
        
    }
};