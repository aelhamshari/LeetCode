class Solution {
private:
    bool check_valid(int a, int b, int c, int k)
    {
        return (abs(a-b) <= k && abs(b-c) <= k && abs(a-c) <= k);
    }
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> solution ={};
        int i = 0;
        while(i<nums.size())
        {
            if (check_valid(nums[i],nums[i+1], nums[i+2], k))
            {
                solution.push_back({nums[i],nums[i+1], nums[i+2]});
                i += 3;
            }
            else
            {
                vector<vector<int>> zero = {};
                return(zero);
            }
        }
        return(solution);
    }
};