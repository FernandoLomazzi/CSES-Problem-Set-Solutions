#include <bits/stdc++.h>
using namespace std;

int n,m;
void dfs(int i,int j,vector<string> &v){
	if(not(i>=0 and i<n and j>=0 and j<m and v[i][j]=='.')){
		return;
	}
	v[i][j] = '#';
	dfs(i+1,j,v);
	dfs(i-1,j,v);
	dfs(i,j+1,v);
	dfs(i,j-1,v);
}
int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	vector<string> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<pair<int,int>> mov={{0,1},{0,-1},{1,0},{-1,0}};
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j]=='.'){
				ans++;
				dfs(i,j,v);
			}
		}
	}
	cout << ans << '\n';
	return 0;
}

