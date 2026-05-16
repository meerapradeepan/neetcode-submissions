class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> transposed; 
        int rows = matrix.size(); // 2
        int cols = matrix[0].size(); // 3
        transposed.reserve(cols);
        for (int i = 0; i < cols; i++){ // 3
            vector<int> row; 
            row.reserve(rows); // 2 
            transposed.emplace_back(row);
        }
        for (int i = 0; i < cols; i++){ // 3
            for (int j = 0; j < rows; j++){ // 2
                transposed[i].emplace_back( matrix[j][i]);
            }
        }
        return transposed;

    }
};