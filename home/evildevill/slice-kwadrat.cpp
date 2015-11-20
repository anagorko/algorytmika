int solution(vector<int> &A) {

    float x=0;
    float y=0;
    int z;
    unsigned int P;
    int Q;
    float min = 1000000000;
    
    
    for(P=0; P < A.size(); P++)
        {   
        
            x = A[P];
            
            for(Q = P+1; Q < A.size() ; Q++)
                {
                    x = x + A[Q];
                    y = x/(Q-P+1);
                    
                    if (y < min)
                       {
                           min = y;
                           z = P;
                       }
                }
                    
            
        }

return z;

}
