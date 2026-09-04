class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(const auto& it: strs){
            string SortS= it;
            sort(SortS.begin(), SortS.end());
            res[SortS].push_back(it);
        }
        vector<vector<string>> result;
        for(auto &its:res){
            result.push_back(its.second);
        }
        return result;
    }
};
