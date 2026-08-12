class Solution {
public:
    vector<string> ans;

    void solve(int n, string &s) {
        // If string length becomes n
        if (s.length() == n) {
            ans.push_back(s);
            return;
        }

        // Choice 1: Put 1
        s.push_back('1');
        solve(n, s);
        s.pop_back();

        // Choice 2: Put 0
        // Only allowed if previous character is not 0
        if (s.empty() || s.back() != '0') {
            s.push_back('0');
            solve(n, s);
            s.pop_back();
        }
    }

    vector<string> validStrings(int n) {
        string s = "";
        solve(n, s);
        return ans;
    }
};