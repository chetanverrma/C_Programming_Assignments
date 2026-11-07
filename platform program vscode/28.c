//Perfect numbers
//https://leetcode.com/problems/perfect-number/
bool checkPerfectNumber(int num) {
    if (num <= 1) return false;

    int sum = 1;  // 1 is a divisor of every number > 1
    for (int i = 2; (long long)i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}
