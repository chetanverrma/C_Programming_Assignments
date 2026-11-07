//2169 Count operation to obtain zero
//https://leetcode.com/problems/count-operations-to-obtain-zero/submissions/2187880659/
int countOperations(int num1, int num2) {
    int count=0,max;
    if(num1==0 || num2==0){
        return 0;
    }
    while(num1>0 && num2>0){
        max = (num1>num2)? num1 : num2;
        if (max == num1){
            num1=num1-num2;
        }
        else{
            num2=num2-num1;
        }
    count ++;
    }
return count;
}
