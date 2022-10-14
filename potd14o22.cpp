int maximizeSum(int a[], int n) 
    {
        int ms=0;
        map<int,int,greater<int>> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        for(auto x:mp){
            if(mp.find(x.first-1)!=mp.end()&&mp[x.first]>0){
                mp[x.first-1]=mp[x.first-1]-mp[x.first];
            }
        }
        for(auto x:mp){
            if(x.second>0){
                ms=ms+(x.second)*(x.first);
            }
        }
        return ms;
    }
