/*
    Problem details: https://leetcode.com/problems/jump-game/
*/

class Solution
{
public:
    bool canJump(vector<int>& nums)
    {
        int N = nums.size();
        int maxIdx = 0;
        for(int i = 0; i < N; i++)
        {
            if(maxIdx >= N - 1)
                return true;
            if(i > maxIdx)
                return false;
            maxIdx = (i + nums[i]) > maxIdx ? i + nums[i] : maxIdx;
        }
        return false;
    }
};