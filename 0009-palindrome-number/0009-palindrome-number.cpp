class Solution {
public:
    bool isPalindrome(int x) {
        long long reversedNum = 0;
        int temp = x;
        if(x<0)return false;
        while (temp != 0) {
            int remainder = temp % 10;
            reversedNum = reversedNum * 10 + remainder;
            temp /= 10;
        }
        return x == reversedNum;
    }
};