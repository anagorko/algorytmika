
vector<int> solution(int N, vector<int> &A) {

    vector<int> b(N); // b from board

    int cou = 0; // cou from counter. I will use it to remember current value.

    int max = 0; // max is used to remember the highest value.

    int len = A.size(); // len stands from lenght

    for(int var = 0; var < N; var++){ // I will use var (stands from variable) in loops.
        b[var] = 0;
    }

    for(int var=0; var < len; var++){

        if(A[var] <= N){

            if(b[A[var]-1] >= cou){
                b[A[var]-1]++;

            }else{
                b[A[var]-1] = cou + 1;
            }

        if(b[A[var]-1] > max){
            max = b[A[var]-1];
        }
    
        }else{
            cou = max;
        }   

    }   

    for(int var = 0; var < len; var++){

        if(b[var] < cou){
            b[var] = cou;
        }

    }

return b;
}
