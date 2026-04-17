class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    ans = max(ans, trav(grid, i, j));
                }
            }
        }
        return ans;
    }
    int trav(vector<vector<int>>& grid, int i, int j){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()){
            return 0;
        }
        if(grid[i][j] == 0){
            return 0;
        }
        grid[i][j] = 0;
        return 1 + trav(grid, i + 1, j) + trav(grid, i, j + 1) + trav(grid, i - 1, j) + trav(grid, i, j - 1);
    }
};
