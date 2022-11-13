class Solution {
private:
    void solve(vector<int> nums, vector<int> optput,int index,vector<vector<int> >& ans){
        //base case
        if (index>= nums.size()) {
            ans.push_back(optput);
            return;
        }

        //exclude 
        solve(nums, optput, index+1, ans);

        //include 
        int element = nums[index];
        optput.push_back(element);
        solve(nums,optput,index+1,ans);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int> > ans;
        vector<int> optput;
        int index = 0;

        //function call
        solve (nums, optput, index, ans);
        return ans;

        
    }
};