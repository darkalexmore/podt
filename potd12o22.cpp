string maxSum(string w,char x[], int b[],int n){
        int mp[256]={0};
        int end=0,len=1,curr_len=1,curr_end=0;
        for(int i=0;i<n;i++){
            mp[x[i]]=b[i];
        }
        int max_sum,curr;
        max_sum=w[0];
        curr=w[0];
        if(mp[w[0]]!=0){
            max_sum=mp[w[0]];
            curr=mp[w[0]];
        }
        for(int i=1;i<w.size();i++){
            int cc=w[i];
            if(mp[w[i]]!=0){
                cc=mp[w[i]];
            }
            if(curr+cc>cc){
                curr=curr+cc;
                curr_end=i;
                curr_len++;
                if(curr>max_sum){
                    max_sum=curr;
                    end=curr_end;
                    len=curr_len;
                }
            }
            else{
                if(curr!=0){
                    curr_len=0;
                }
                curr_len++;
                curr=cc;
                curr_end=i;
                if(cc>max_sum){
                    max_sum=cc;
                    end=curr_end;
                    len=curr_len;
                }
            }
        }
        int i=end-len+1;
        string res="";
        while(len--){
            res+=w[i++];
        }
        return res;
    }
