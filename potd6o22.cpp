class Solution {
  public:
    string lexicographicallySmallest(string S, int k) {
        stack<char> st; 
        if(!(S.size()&(S.size()-1))){
            k=k/2;
        }
        else{
            k=k*2;
        }
        if(k>=S.size()){
            return "-1";
        }
        string ss = S;
        sort(ss.begin() , ss.end());
        if(S==ss)
            return S.substr(0 , S.size() - k);
        for(int i=0;i<S.size();i++){
            if(st.empty()||st.top()<=S[i]){
                st.push(S[i]);
            }
            else{
                while(!st.empty()&&S[i]<st.top()&&k>0){
                    st.pop();
                    k--;
                }
                st.push(S[i]);
            }
        }
        ss="";
        while(!st.empty()&&k>0){
            k--;
            st.pop();
        }
        while(!st.empty()){
            ss+=st.top();
            st.pop();
        }
        reverse(ss.begin(),ss.end());
        return ss;
    }
};
