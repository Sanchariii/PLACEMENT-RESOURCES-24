#include<bits\stdc++.h>

using namespace std;


int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int ans = n;
        int low =0;
        int high =n-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
        
    }


int main()
{
    vector<int> nums ={1,2,4,7};
    int target = 6;
    int index = searchInsert(nums,target);
    cout<<"The index is :"<<index<<endl;
    return 0;
}