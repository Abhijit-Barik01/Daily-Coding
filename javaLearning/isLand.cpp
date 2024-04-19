#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int n;
    int m;
    
    void dfs(int i, int j, vector<vector<char>>& grid)
    {
        if(i < 0 || j < 0 || i >=n || j >=m  || grid[i][j] !='1')
            return;
        
        
        grid[i][j] ='$';
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m= grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j =0; j<m;j++)
            {
                if(grid[i][j] =='1')
                {
                dfs(i,j,grid);
                count++;
                }
              
            }
        }
        return count;
    }
};

int main()
{
    vector<vector<char>> vec = {{'0','1','0','0'},{'1','1','1','0'},{'0','0','0','0'},{'1','1','0','0'}};

    Solution obj;
    cout << " Total perimerter" << obj.numIslands(vec);

    return 0;
}