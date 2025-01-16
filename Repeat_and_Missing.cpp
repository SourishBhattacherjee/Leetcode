vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> solution(2,0);
    vector<int> count(A.size()+1,0);
    for (int i=0;i<A.size();i++){
        count[A[i]]++;
    }
    for (int i=0;i<count.size();i++){
        if(count[i]==2){
            solution[0]=i;
        }
        if(count[i]==0 && i!=0){
            solution[1]=i;
        }
        
    }
    return solution;
    
    
}
