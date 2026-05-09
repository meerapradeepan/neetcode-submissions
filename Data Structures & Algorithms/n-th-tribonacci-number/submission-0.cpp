class Solution {
public:
    std::unordered_map<int, int> memo = {{0, 0}, {1, 1}, {2,1}};
    int tribonacci(int n) {
        if (memo.find(n) != memo.end()){return (memo.find(n))->second;}
        int ret = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        memo[n] = ret;
        return ret;
    }
};