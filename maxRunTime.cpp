
class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum = 0;
        for (int b : batteries) sum += b;

        long long low = 0;
        long long high = sum / n;   // max possible T
        long long ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            long long total = 0;
            for (long long b : batteries) {
                total += min(b, mid);
            }

            if (total >= mid * n) {
                ans = mid;       // mid is possible
                low = mid + 1;   // try higher
            } else {
                high = mid - 1;  // mid not possible
            }
        }

        return ans;
    }
};
