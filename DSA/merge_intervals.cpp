#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> MergeIntervals(vector<vector<int>>&intervals)
{
	sort(intervals.begin(),intervals.end());
	int n= intervals.size();

	vector<vector<int>>ans;
	for(int i=0;i<n;i++)
	{
		if(ans.empty())
	{
		ans.push_back(intervals[i]);
	}
	else
	{
		vector<int>& v = ans.back();
		int end_time = v[1];
		//[1,5][1,4]=>[1,5]

		if(intervals[i][0]<=end_time)
		{
			v[1]=max(end_time,intervals[i][1]);
		}
		else
		{
			ans.push_back(intervals[i]);
		}
	}

	}
	return ans;

	
}

int main()
{
	vector<vector<int>> intervals ={{1,3},{8,10},{2,6},{15,18}};
	vector<vector<int>> ans = MergeIntervals(intervals);
	cout<<"The merged intervals are:"<<endl;

	for(auto it : ans)
	{
		cout<<"["<<it[0]<<","<<it[1]<<"]";
	}
	cout<<endl;
	return 0;
}