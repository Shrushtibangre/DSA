/* #include <bits/stdc++.h>
using namespace std;

unordered_map<string, bool> memo;

bool isValid(const string &s) {
    if (s.empty()) return true;
    if (memo.count(s)) return memo[s];

    int n = s.size();

    // Rule 2: check if first and last match
    if (s.front() == s.back() && isValid(s.substr(1, n - 2)))
        return memo[s] = true;

    // Rule 3: try splitting into two valid parts
    for (int k = 1; k < n; k++) {
        if (isValid(s.substr(0, k)) && isValid(s.substr(k)))
            return memo[s] = true;
    }

    return memo[s] = false;
}

vector<int> findValidDiscountCoupons(const vector<string> &discounts) {
    vector<int> ans;
    for (auto &s : discounts) {
        ans.push_back(isValid(s) ? 1 : 0);
    }
    return ans;
}

int main() {
    vector<string> discounts = {"daabbd", "abc"};
    vector<int> res = findValidDiscountCoupons(discounts);
    for (int v : res) cout << v << " ";
    cout << "\n"; // Expected: 1 0
    return 0;
}
*/

// Long String ke liye 

#include <bits/stdc++.h>
using namespace std;

bool isValidCoupon(const string &s) {
    int n = s.size();
    if (n == 0) return true;
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    // length = 1 → invalid
    for (int i = 0; i < n; i++) dp[i][i] = false;
    // fill for increasing substring length
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
   // Rule 2: wrap check
            if (s[i] == s[j]) {
                if (len == 2 || dp[i+1][j-1]) {
                    dp[i][j] = true;
                    continue;
                }
            }
            // Rule 3: split check
            for (int k = i; k < j; k++) {
                if (dp[i][k] && dp[k+1][j]) {
                    dp[i][j] = true;
                    break;
                }
            }
        }
    }
    return dp[0][n-1];
}
vector<int> findValidDiscountCoupons(const vector<string> &discounts) {
    vector<int> ans;
    for (auto &s : discounts) {
        ans.push_back(isValidCoupon(s) ? 1 : 0);
    }
    return ans;
}

int main() {
    vector<string> discounts = {"abba", "acca", "daabbd", "abc"};
    auto res = findValidDiscountCoupons(discounts);
    for (int x : res) cout << x << " ";
    cout << "\n";  // Expected: 1 0 1 0
}

