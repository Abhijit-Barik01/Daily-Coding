#include<iostream>
#include<vector>
#include<queue>

class Solution {
public:
     int periemeter =0 ;
     int row ;
     int col;
     std::vector<std::vector<int>> directions= {{1,0},{0,1},{-1,0},{0,-1}};
     void bfs(std::vector<std::vector<int>>& grid,int i, int j)
     {
        std::queue<std::pair<int,int>>myqueue;
        myqueue.push({i,j});
        grid[i][j] = -1;
        while(!myqueue.empty())
        {
            std::pair<int,int> m= myqueue.front();
            myqueue.pop();

            for(auto x: directions)
            {
                int i_= m.first+ x[0];
               int  j_= m.second+ x[1];

                if(i_ < 0 || j_ < 0 || i_ >=row || j_ >=col || grid[i_][j_] == 0)
                {
                    periemeter++;
                    
                }
                else if(grid[i_][j_] == -1)
                {
                    continue;
                }
                else{
                    myqueue.push({i_,j_});
                    grid[i_][j_]=-1;
                }
            }

        }


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
                    bfs(grid,i,j);
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