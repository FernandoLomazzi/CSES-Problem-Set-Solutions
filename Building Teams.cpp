#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<int> color;
bool ok = 1;
void dfs(int u){
	for(int y: v[u]){
		if(color[u]==color[y]){
			ok = 0;
			return;
		}
		if(color[y]==-1){
			color[y] = 1-color[u];
			dfs(y);
		}
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
	color.resize(n,-1);
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		a--;b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=0;i<n;i++){
		if(color[i]==-1){
			color[i] = 0;
			dfs(i);
		}
	}
	if(ok){
		for(int x: color){
			cout << x+1 << " ";
		}
	}
	else{
		cout << "IMPOSSIBLE\n";
	}
	return 0;
}

