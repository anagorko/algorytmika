int solution(int A, int B, int K) {
 
    int ile;
    
    if(A%K == 0)
        {
            ile = (B-A)/K + 1;
            }
    else
        {
            ile = (B-A)/K;
            }
 
 return ile; 
 }
