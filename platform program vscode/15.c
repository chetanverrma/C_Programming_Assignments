//2652. Sum Multiples
//https://leetcode.com/problems/sum-multiples/submissions/2187925312/
int sumOfMultiples(int n) {
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%3==0|| i%5==0 || i%7==0){
            sum=sum+i;
        }
    }
    return sum;
}
