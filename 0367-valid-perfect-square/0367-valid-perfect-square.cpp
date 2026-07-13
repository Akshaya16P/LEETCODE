#include <cmath> // for sqrt

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long root = (long long) sqrt(num); 
        return root * root == num;           
    }
};
