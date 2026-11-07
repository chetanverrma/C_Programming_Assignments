//2651 Calculate Delayed Arrival Time
//https://leetcode.com/problems/calculate-delayed-arrival-time/description/
int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int sum=arrivalTime + delayedTime;
    if(sum==24){
        return 0;
    }
    else{
        return(arrivalTime + delayedTime);
    }
}
