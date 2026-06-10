#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    long long mod = 1e9 + 7;

    long long power(long long a, long long b) {

        long long result = 1;

        while (b > 0) {

            if (b % 2) {
                result = (result * a) % mod;
            }

            a = (a * a) % mod;
            b /= 2;
        }

        return result;
    }

    int countAnagrams(string s) {

        stringstream ss(s);
        string word;

        long long ans = 1;

        while (ss >> word) {

            int n = word.size();

            vector<long long> fact(n + 1, 1);

            for (int i = 1; i <= n; i++) {
                fact[i] = (fact[i - 1] * i) % mod;
            }

            vector<int> freq(26, 0);

            for (char ch : word) {
                freq[ch - 'a']++;
            }

            long long ways = fact[n];

            for (int x : freq) {

                if (x > 1) {
                    ways = (ways * power(fact[x], mod - 2)) % mod;
                }
            }

            ans = (ans * ways) % mod;
        }

        return ans;
    }
};

int main() {

    string s = "too hot";

    Solution obj;

    cout << obj.countAnagrams(s);

    return 0;
}