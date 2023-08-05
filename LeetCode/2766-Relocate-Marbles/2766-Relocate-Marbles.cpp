class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        
        set<int> s(nums.begin(), nums.end());
        int n = moveFrom.size();
        for(int i = 0;i<n;i++){
            s.erase(moveFrom[i]);
            s.insert(moveTo[i]);
        }
        return vector<int> (s.begin(), s.end());
    }
};
