class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq_map;
        for (int num : nums) {
            freq_map[num]++;
        }

        vector<pair<int, int>> freq_arr;
        for (auto& [key, value] : freq_map) {
            freq_arr.push_back({key, value});
        }

        // sort vector of pairs by the second value in pair, which is the frequency of the int
        sort(freq_arr.begin(), freq_arr.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return b.second < a.second; // sort by frequency (descending)
        });

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freq_arr[i].first);
        }

        return ans;
    }
};
