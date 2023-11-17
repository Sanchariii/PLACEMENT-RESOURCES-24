#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

	vector<int> shortPath(vector<vector<int>>&edges, int n, int m, int src)
	{
		vector<int> adj[n];
		for(auto it : edges)
		{
			adj[it[0]].push_back(it[1]);
			adj[it[1]].push_back(it[0]);
		}

		int dist[n];
		for(int i=0;i<n;i++)
		{
			dist[i]=1e9;

		}

		dist[src] = 0;

		queue<int> q;
		q.push(src);

		while(!q.empty())
		{
			int node = q.front();
			q.pop();
			for(auto it : adj[node])
			{
				if(dist[node]+1 < dist[it])
				{
					dist [it] = dist[node]+1;
					q.push(it);
				}
			}
		}
		vector<int>ans(n,-1);
		for(int i=0;i<n;i++)
		{
			if(dist[i] != 1e9)
			{
				ans [i] =dist[i];
			}
		}
		return ans;

	}
};
int main(){

int n=9, m=10;
vector<vector<int>> edges= {{0,1},{0,3},{3,4},{4,5},{5,6},{1,2},{2,6},{6,7},{7,8},{6,8}};

Solution obj;
vector<int> ans = obj.shortPath(edges,n,m,0);

for(int i=0;i<ans.size();i++){
    
    cout<<ans[i]<<" ";
}

return 0;
}