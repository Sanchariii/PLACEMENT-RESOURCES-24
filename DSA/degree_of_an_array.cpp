class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        unordered_map<int,int> c,s,e;
        int max_ele =0;
        for(int i=0;i<nums.size();i++)
        {
            if(c[nums[i]]==0)
            {
                s[nums[i]]=i;
                e[nums[i]]=i;
            }
            else
            {
                e[nums[i]]=i;
            }
            c[nums[i]]++;
            max_ele = max(max_ele,c[nums[i]]);
        }

        int mini = INT_MAX;
        for(auto it : c)
        {
            if(it.second==max_ele)
            {
                mini = min(mini,e[it.first]-s[it.first]+1);
            }
        }
        return mini;
        
    }
};
