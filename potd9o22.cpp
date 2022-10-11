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
