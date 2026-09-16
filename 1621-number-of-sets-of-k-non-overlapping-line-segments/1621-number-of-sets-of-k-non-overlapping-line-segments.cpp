class Solution {
    const int MOD = 1e9 + 7;

    // Helper function for modular exponentiation
    long long power(long long base, long long exp) {
        long long res = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }

    // Fermat's Little Theorem for modular inverse
    long long modInverse(long long n) {
        return power(n, MOD - 2);
    }

    // Function to calculate nCr % MOD
    long long nCr(int n, int r) {
        if (r > n || r < 0) return 0;
        
        long long num = 1;
        long long den = 1;
        
        for (int i = 0; i < r; i++) {
            num = (num * (n - i)) % MOD;
            den = (den * (i + 1)) % MOD;
        }
        
        return (num * modInverse(den)) % MOD;
    }

public:
    int numberOfSets(int n, int k) {
        // We are choosing 2*k points from (n + k - 1) total points
        return nCr(n + k - 1, 2 * k);
    }
};