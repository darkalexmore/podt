vector<int> findLeastGreater(vector<int>& arr, int n) {
        set<int> s;
        vector<int> v;
        for(int i=n-1;i>=0;i--){
            int key = arr[i];
            auto it=s.upper_bound(key);
            if(it==s.end()){
                v.push_back(-1);
            }
            else{
                v.push_back(*it);
            }
            s.insert(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
