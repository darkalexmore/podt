//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    bool isPrime(int n){
	        if(n==1) return false;
	        for(int i=2;i*i<=n;i++)
	            if(n%i==0)
	                return false;
	        return true;
	    }
	
		int NthTerm(int N){
            int b=N-1,f=N+1;
            if(isPrime(N)){
                return 0;
            }
            
		    while(true){
		        if(isPrime(b)){
		            return N-b;
		        }
		        if(isPrime(f)){
		            return f-N; 
		        }
		        b--;f++;
		    }
		    return -1;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends