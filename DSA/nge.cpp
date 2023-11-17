#include<bits/stdc++.h>
using namespace std;


vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        stack<int>st;

        unordered_map<int,int>mp;

        for(int i=m-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]) st.pop();
            if(st.empty()) mp[nums2[i]]=-1;
            else mp[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=mp[nums1[i]];
        }
        return ans;
    }
int main()
{
    vector <int> n1{4,1,2};
    vector<int>n2{1,3,4,2};
    vector<int>res=nextGreaterElement(n1,n2);
    cout<<"NGE:"<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<",";
    }
    return 0;
}

    
