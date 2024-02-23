
/**
 * @class Solution
 * @brief This class provides a solution for calculating the power of a number using recursion.
 */
class Solution {
public:
    double ans = 1;

    /**
     * @brief Calculates the power of a number.
     * @param x The base number.
     * @param n The exponent.
     * @return The result of x raised to the power of n.
     */
    double myPow(double x, int n) {
        if(n==0) return ans;
        if(n<0){
            ans = (1/x)*ans;
            return myPow(x,n+1);
        }
        else{
            ans = ans*x;
            return myPow(x,n-1);
        }
    }
};


//optimize way
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0) {
            n = abs(n);
            x = 1/x;
        }
        if(n%2==0){
            return myPow(x*x, n/2);
        }
        else{
            return x*myPow(x, n-1);
        }
    }
};