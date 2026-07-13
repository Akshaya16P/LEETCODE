class Solution {
public:
    bool isPrime(int x) {
        if (x < 2) return false;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        }
        return true;
    }

    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for (int n : nums) {

            // Case 1: n = p^3
            int root = round(cbrt(n));
            if (root * root * root == n && isPrime(root)) {
                ans += 1 + root + root * root + n;
                continue;
            }

            // Case 2: n = p * q (distinct primes)
            int d = -1;
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    d = i;
                    break;
                }
            }

            if (d == -1) continue;

            int other = n / d;
            if (d != other && isPrime(d) && isPrime(other)) {
                ans += 1 + d + other + n;
            }
        }

        return ans;
    }
};
