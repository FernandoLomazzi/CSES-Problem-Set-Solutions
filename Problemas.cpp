#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,q;
	cin>>n>>m>>q;
	vector<vector<long long>> g(n,vector<long long>(n,1e15));
	for(int i=0;i<m;i++){
		int a,b,w;
		cin>>a>>b>>w;
		a--;b--;
		g[a][b] = min(g[a][b],1ll*w);
		g[b][a] = min(g[a][b],1ll*w);
	}
	for(int i=0;i<n;i++)
		g[i][i] = 0;
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				g[i][j] = min(g[i][j],g[i][k]+g[k][j]);
			}
		}
	}
	while(q--){
		int a,b;
		cin>>a>>b;
		a--;b--;
		cout << (g[a][b]==1e15 ? -1 : g[a][b]) << '\n';
	}
	return 0;
}

