class Solution {
public:
    std::map<int, int> stairs; 
    int climbStairs(int n) {
        if (n == 1) { return 1; }
        if (n == 2) {return 2; }
        if (auto found = stairs.find(n); found != stairs.end()){
            return found->second; 
        } else {
            auto ret = climbStairs (n-1) + climbStairs(n-2);
            stairs[n] = ret; return ret; }
        
        
        
    }
};
