class Solution {
  public:
    int countOfSubstrings(string str, int k) {
        int count=0;
        int s=0;
        unordered_map<char,int> mp;
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
            if(i+1>=k){
                if(mp.size()==k-1)
                    count++;
                mp[str[s]]--;
                if(mp[str[s]]==0)
                    mp.erase(str[s]);
                s++;    
            }
        }
        return count;
    }
};
