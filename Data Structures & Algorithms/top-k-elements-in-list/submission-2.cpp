bool cmp(pair<int,int> a,pair<int,int>b)
{
    return a.second>b.second;
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> temp;
        for(int x:nums)
        {
            temp[x]++;
        }
        vector<pair<int,int>> test;
        for(auto a: temp)
        {
            test.push_back(a);
            sort(test.begin(),test.end(),cmp);
        }
        vector<int> result;
        for(int i=0;i<k;i++)
        {
            result.push_back(test[i].first);
        } 
        return result;
    }

};
