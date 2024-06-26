class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>mp;

        for(auto str: strs){
            string s = str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }
            vector<vector<string>>ans;
            for(auto str: mp){
                ans.push_back(str.second);
            }
            return ans;
    }

};
