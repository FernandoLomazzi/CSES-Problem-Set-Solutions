#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<bool> used;
void dfs(int u){
	used[u] = true;
	for(int y: v[u]){
		if(!used[y])
			dfs(y);
	}
}
int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	v.resize(n);
	used.resize(n);
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		a--;b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	vector<int> ans;
	for(int i=0;i<n;i++){
		if(!used[i]){
			dfs(i);
			ans.push_back(i);
		}
	}
	cout << ans.size()-1 << '\n';
	for(int i=1;i<ans.size();i++){
		cout << ans[0]+1 << " " << ans[i]+1 << '\n';
	}
	return 0;
}

