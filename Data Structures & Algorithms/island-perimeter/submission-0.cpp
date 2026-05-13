class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perim = 0;
        int row =  grid.size();
        int col = grid[0].size();
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if (grid[i][j] == 1){
                    // we investigate each side to see if it contributes to perim
                     bool top = i == 0 || grid[i-1][j] == 0;
                     bool bottom = i == row - 1 || grid[i+1][j] == 0;
                     bool left = j == 0 || grid[i][j-1] == 0;
                     bool right = j == col - 1 || grid[i][j+1] == 0;
                     if (top) {perim++;}
                     if (bottom) {perim++;}
                     if (left) {perim++;}
                     if (right) {perim++;}
                }
            }
        }
        return perim;
    }
};