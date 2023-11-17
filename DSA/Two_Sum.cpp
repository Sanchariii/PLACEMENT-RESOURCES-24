#include<bits/stdc++.h>
using namespace std;

vector<int> TwoSum(vector<int>& arr, int n,int target)
{
	unordered_map<int,int>mpp;
	for(int i=0;i<n;i++)
	{
		int complement = target - arr[i];
		if(mpp.count(complement)>0)
		{
			return{mpp[complement],i};
		}
		mpp[arr[i]]=i;
	}
	return{};
}