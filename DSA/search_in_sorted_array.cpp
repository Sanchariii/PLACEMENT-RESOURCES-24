#include<bits/stdc++.h>

using namespace std;
int Search(vector<int>& arr, int n, int target)
{
	int low = 0;
	int high = n-1;

	while(low<=high)
	{
		int mid =(low +high)/2;
		if(arr[mid]==target) return mid;

		//mid = 2
		//target = 5

		else if(arr[mid]<target) 
		{
			low = mid +1;
		}
		else
			{
				high = mid -1;
			}
	}
	return -1;
}


int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int n = 9, target = 1;
    int ans = Search(arr, n, target);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}