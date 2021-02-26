#include <bits/stdc++.h>
using namespace std;

vector<int> g[100000];
vector<int> p;
vector<bool> visited;
int nodoi=-1,nodof=-1;
void dfs(int u){
	visited[u] = true;
	if(nodoi!=-1)
		return;
	for(int y: g[u]){
		if(y==p[u])
			continue;
		if(visited[y]){
			nodoi = u;
			nodof = y;
			return;
		}
		else{
			p[y] = u;
			dfs(y);
		}
		if(nodoi!=-1)
			return;
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
	p.resize(n,-1);
	visited.resize(n);
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		a--;b--;
		g[b].push_back(a);
		g[a].push_back(b);
	}
	for(int i=0;i<n;i++){
		if(!visited[i])
			dfs(i);
		if(nodoi!=-1){
			vector<int> ans={nodof};
			while(nodoi!=nodof){
				ans.push_back(nodoi);
				nodoi = p[nodoi];
			}
			cout << ans.size()+1 << '\n';
			for(int x: ans)
				cout << x+1 << " ";
			cout << nodof+1 << '\n';
			break;
		}
	}
	if(nodoi==-1)
		cout << "IMPOSSIBLE\n";
	return 0;
}

