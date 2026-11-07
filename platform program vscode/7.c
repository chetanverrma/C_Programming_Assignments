//2413 Smallest even multiple 
//https://leetcode.com/problems/smallest-even-multiple/submissions/2185919539/
int smallestEvenMultiple(int n) {
    int i=1;
     while(1){
        
        if(i%n==0 && i%2==0){
            break;
        }
   
    ++i;
    }
    return i ;
}
