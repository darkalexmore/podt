class Solution {
  public:
  
    void dfs(vector<vector<int>>&v,int l,int i,int j,int n,int m){
        if(i>n-1||j>m-1||i<0||j<0){
            return;
        }
        if(v[i][j]!=l){
            return;
        }
        v[i][j]+=1;
        dfs(v,l,i-1,j,n,m);
        dfs(v,l,i+1,j,n,m);
        dfs(v,l,i,j-1,n,m);
        dfs(v,l,i,j+1,n,m);
    }
  
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        int k=operators.size();
        int l=1;
        vector<int> vv;
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i=0;i<k;i++){
            int count=0;
            v[operators[i][0]][operators[i][1]]=l;
            for(int t=0;t<n;t++){
                for(int j=0;j<m;j++){
                    if(v[t][j]==l){
                        dfs(v,l,t,j,n,m);
                        count++;
                    }
                }
            }
            l++;
            vv.push_back(count);
        }
        return vv;
    }
};
