class Solution {
public:

    void sub(vector<int>s,vector<int>nums,vector<vector<int>>&ans,int idx){
        if(idx==nums.size()){
            ans.push_back(s);
            return ;
        }
        s.push_back(nums[idx]);
        sub(s,nums,ans,idx+1);

        s.pop_back();
        sub(s,nums,ans,idx+1);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>s;
        vector<vector<int>>ans;
        sub(s,nums,ans,0);
        return ans;
    }
};