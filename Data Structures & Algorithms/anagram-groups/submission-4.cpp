class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>test;
        for(string a:strs)
        {
            string temp =a;
            sort(temp.begin(),temp.end());
            test[temp].push_back(a);
        }
        vector<vector<string>> ans;
        for(auto x:test)
        {
            ans.push_back(x.second);
        }
        return ans; 

    }
};
