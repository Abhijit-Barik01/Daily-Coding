#include<iostream>
#include<vector>
class Solution {
public:
     int periemeter =0 ;
     int row ;
     int col;
     void dfs(std::vector<std::vector<int>>& grid,int i, int j)
     {
        if(i < 0 || j < 0 || i > row -1 || j > col -1 || grid[i][j] == 0)
        {
            periemeter++;
            return;
        }

        if(grid[i][j] == -1)
            return ;
        grid[i][j] =-1;

        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
     }   
    int islandPerimeter(std::vector<std::vector<int>>& grid) {
        row = grid.size();
        col = grid[0].size();

        for(int i =0 ; i< row ; i++)
        {
            for(int j =0 ; j< col; j++)
            {
                if(grid[i][j] == 1)
                {
                    dfs(grid,i,j);
                }
            }
        }
    return periemeter;
}
};

int main()
{
    std::vector<std::vector<int>>v ={{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    Solution obj;
    std::cout << " Total perimerter" << obj.islandPerimeter(v);

    return 0;
}