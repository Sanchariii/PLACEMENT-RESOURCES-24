#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& arr,int n)
{
	int slow = arr[0];
	int fast = arr[0];

	do{
		slow= arr[i];
		fast=arr[arr[i]];
	}
	while(slow!=fast);
	fast = arr[0];
	while(slow!=fast)
	{
	  slow=arr[i];
	  fast =arr[i];
	}
	return slow;

	
}