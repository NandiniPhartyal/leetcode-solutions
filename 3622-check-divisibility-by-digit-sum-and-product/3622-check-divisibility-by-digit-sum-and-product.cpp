class Solution {
public:
    bool checkDivisibility(int n) {
        return n % (digitSum(n) + digitProduct(n)) == 0;
    }
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int digitProduct(int n) 
    {
        int product = 1;
        while (n > 0) {
            product *= n % 10;
            n /= 10;
        }
        return product;
    }
};