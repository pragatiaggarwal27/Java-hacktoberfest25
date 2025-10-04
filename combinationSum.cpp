class Solution {
public:
     void solve(vector<int>& candidates, int target,int idx,vector<vector<int>>&res, vector<int>&ans){
        if(idx>=candidates.size()){
         if(target==0){
            res.push_back(ans);
         } 
         return;
        }
         if(candidates[idx]<=target){
         ans.push_back(candidates[idx]);
         solve(candidates,target-candidates[idx],idx,res,ans);
         ans.pop_back();
         }
         solve(candidates,target,idx+1,res,ans);
     }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>ans;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0,res,ans);
        return res;
    }
};
