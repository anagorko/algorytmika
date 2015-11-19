int solution(vector<int> &A) {
    
    long long int x = 0, west = 0;
    int N = A.size();
    
    for(int q = N - 1; q >= 0; q--){
        
        if(A[q] == 0){
            
            if(x > 1000000000 - west){
                return -1;
            }
            
            x += west;
        }else{
            
            west += 1;
               
        }
        
    }
        
    
    return x;
    
}
