class Solution{
public:
    vector<int> prefixCount(int N, int Q, string li[], string query[])
    {
        unordered_map<string,int> m;
        vector<int> v;
        for(int i=0;i<N;i++){
            string s="";
            for(int j=0;j<li[i].size();j++){
                s+=li[i][j];
                m[s]++;
            }
        }
        for(int i=0;i<Q;i++){
            v.push_back(m[query[i]]);
        }
        return v;
    }
};
