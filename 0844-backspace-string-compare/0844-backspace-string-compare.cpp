class Solution {
public:
    string build(string s) {
        string ans = "";

        for (char ch : s) {
            if (ch != '#') {
                ans += ch;
            } else if (!ans.empty()) {
                ans.pop_back();
            }
        }

        return ans;
    }

    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
};