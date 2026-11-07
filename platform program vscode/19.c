//1281. Subtract the Product and Sum of Digits of an Integer
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
int subtractProductAndSum(int n) {
    int prod=1,sum=0,org,digit,x;
    org=n;
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        prod=prod*digit;
        n=n/10;
        x=prod-sum;
    }
    return x;
    
}
