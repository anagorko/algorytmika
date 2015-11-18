int solution(int A, int B, int K) {
    
    
    int z, x;
    
    z = A % K;
    
    x = B - A + z;    
    
    if(z==0){
        return x/K + 1;
    }
    
return x/K;
}
