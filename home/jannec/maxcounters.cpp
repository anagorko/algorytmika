vector<int> solution(int N, vector<int> &A) {
  
    vector<int> b;    // b from board
    
    int cou = 0;    // cou from counter. I will use it to remember current value.
    
    int max = 0;   // max is used to remember the highest value.
    
    int len = A.size(); // len stands from lenght
    
  
    
    for(int var = 0; var < N; var++){       // I will use var (stands from variable) in loops. 
        b[var] = 0;
    }
    
    
    
    for(int var=0; var < len; var++){
    
        if(A[var] <= N){
            
            if(b[A[var]] >= cou){                                
                b[A[var]]++;
            
            }else{
                b[A[var]] = cou + 1;
            }    
            
            if(b[A[var]] > max){
                max = b[A[var]];
            }
           
        }else{
            cou = max;
        }
    
    }  
    
    
    
    for(int var = 0; var < len; var++){
        
        if(b[A[var]] < cou){
            b[A[var]] = cou;
        }
        
    }


   
return b;    
}
