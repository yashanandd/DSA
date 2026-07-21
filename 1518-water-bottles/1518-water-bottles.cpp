class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles>=numExchange){
            int div = numBottles/numExchange;
            int remainder = numBottles%numExchange;
            ans+=div;
            numBottles = div+remainder;
        }
        return ans;
    }
};