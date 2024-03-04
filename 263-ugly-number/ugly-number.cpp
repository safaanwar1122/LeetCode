class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false; // Check for non-positive numbers
        if (n == 1) return true; // 1 is considered an ugly number

        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2; // Divide by 2 if divisible
            } else if (n % 3 == 0) {
                n /= 3; // Divide by 3 if divisible
            } else if (n % 5 == 0) {
                n /= 5; // Divide by 5 if divisible
            } else {
                return false; // Not an ugly number
            }
        }
        return true; // It's an ugly number
    }
};
