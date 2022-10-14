class Solution {
  public:
  
    int bfs(vector<vector<int>> &grid, pair<int,int> s,pair<int,int> d){
        int dist=0;
        queue<pair<int,int>> q;
        grid[s.first][s.second]=0;
        q.push(s);
        while(!q.empty()){
            int count=q.size();
            for(int i=0;i<count;i++){
                pair<int,int> curr=q.front();
                q.pop();
                if(curr.first==d.first&&curr.second==d.second)
                {
                    return dist;
                }
                if(curr.first-1>=0){
                    if(grid[curr.first-1][curr.second]==1){
                        grid[curr.first-1][curr.second]=0;
                        q.push({curr.first-1,curr.second});
                    }
                }
                if(curr.second-1>=0){
                    if(grid[curr.first][curr.second-1]==1){
                        grid[curr.first][curr.second-1]=0;
                        q.push({curr.first,curr.second-1});
                    }
                }
                if(curr.first+1<grid.size()){
                    if(grid[curr.first+1][curr.second]==1){
                        grid[curr.first+1][curr.second]=0;                 
                        q.push({curr.first+1,curr.second});
                    }
                }
                if(curr.second+1<grid[0].size()){
                    if(grid[curr.first][curr.second+1]==1){
                        grid[curr.first][curr.second+1]=0;
                        q.push({curr.first,curr.second+1});
                    }
                }
            }
            dist++;
        }
        return -1;
    }
  
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        return bfs(grid,source,destination);
    }
};
