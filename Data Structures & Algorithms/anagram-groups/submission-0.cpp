class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sig_map;
        for (int i = 0; i < strs.size(); i++) {
            string signature = strs[i];
            sort(signature.begin(), signature.end());
            sig_map[signature].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto& [key, value] : sig_map) {
            ans.push_back(value);
        }

        return ans;
    }
};
